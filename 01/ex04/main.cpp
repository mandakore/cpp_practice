#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

std::string replaceAll(const std::string &content, const std::string &s1,const std::string &s2) {
  std::string result;
  std::size_t pos = 0;
  std::size_t found;

  while ((found = content.find(s1, pos)) != std::string::npos) {
    result.append(content, pos, found - pos);
    result.append(s2);
    pos = found + s1.length();
  }
  result.append(content, pos, content.length() - pos);
  return result;
}

int main(int ac, char **av) {
  if (ac != 4) {
    std::cerr << "Usage: ./replace <filename> <s1> <s2>" << std::endl;
    return 1;
  }

  std::string filename = av[1];
  std::string s1 = av[2];
  std::string s2 = av[3];

  if (s1.empty()) {
    std::cerr << "Error: s1 must not be empty" << std::endl;
    return 1;
  }

  std::ifstream ifs(filename.c_str());
  if (!ifs.is_open()) {
    std::cerr << "Error: could not open file: " << filename << std::endl;
    return 1;
  }

  std::stringstream buffer;
  buffer << ifs.rdbuf();
  ifs.close();
  std::string content = buffer.str();

  std::string output = filename + ".replace";
  std::ofstream ofs(output.c_str());
  if (!ofs.is_open()) {
    std::cerr << "Error: could not create file: " << output << std::endl;
    return 1;
  }

  ofs << replaceAll(content, s1, s2);
  ofs.close();

  return 0;
}
