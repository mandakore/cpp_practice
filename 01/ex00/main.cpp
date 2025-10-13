/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atashiro <atashiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 15:10:41 by atashiro          #+#    #+#             */
/*   Updated: 2025/10/13 16:07:36 by atashiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void){

	Zombie* heapZombie = newZombie("Heap");
	heapZombie->announce();


	randomChump("Stack");


	delete heapZombie;

	return (0);
}