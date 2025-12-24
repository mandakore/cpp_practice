/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atashiro <atashiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 17:11:54 by atashiro          #+#    #+#             */
/*   Updated: 2025/11/13 07:06:34 by atashiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
	int N = 5;
	std::cout << "--- Creating a horde of " << N << " Zombies ---" << std::endl;

	Zombie* myHorde = zombieHorde(N, "HordeMember");

	if (myHorde) {
		for (int i = 0; i < N; i++) {
			myHorde[i].announce();
		}

		std::cout << "\n--- Deleting the horde ---" << std::endl;
		delete[] myHorde;
	}

	return (0);
}