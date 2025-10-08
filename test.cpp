/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atashiro <atashiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 16:43:19 by atashiro          #+#    #+#             */
/*   Updated: 2025/10/08 17:10:28 by atashiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <string>

std::string	char_limit(const std::string& str){
	if(str.length() > 10){
		return(str.substr(0,9) + ".");
	}
	return (str);
}

int main() {
	// テストケース
	std::string s1 = "HelloWorld";
	std::string s2 = "ThisIsTooLongText";
	std::string s3 = "Short";

	std::cout << "s1: " << char_limit(s1) << std::endl;
	std::cout << "s2: " << char_limit(s2) << std::endl;
	std::cout << "s3: " << char_limit(s3) << std::endl;

	return 0;
}
