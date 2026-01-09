/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atashiro <atashiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 16:17:28 by atashiro          #+#    #+#             */
/*   Updated: 2026/01/09 19:18:58 by atashiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanA {
	private:
		std::string 	name;
		Weapon&			weapon;


	public:
		HumanA(std::string name, Weapon weapon);
		~HumanA();
		void	attack() const;
		// Weapon	weapon;

};

#endif