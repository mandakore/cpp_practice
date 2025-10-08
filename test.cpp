/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atashiro <atashiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 16:43:19 by atashiro          #+#    #+#             */
/*   Updated: 2025/10/08 18:50:08 by atashiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <string>

#include <iostream>
#include <string>

int main() {
    std::string line;
    std::cout << "1行入力してください: ";
    std::getline(std::cin, line);  // 標準入力から1行読み込む
    std::cout << "入力された行: " << line << std::endl;
    return 0;
}