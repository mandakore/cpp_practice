/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atashiro <atashiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 18:29:10 by atashiro          #+#    #+#             */
/*   Updated: 2026/01/09 19:30:04 by atashiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon {
	private:
		std::string	type_;

	public:
		Weapon(std::string type);
		~Weapon();
		const std::string&	getType(std::string type);
		void				setType(std::string newWeapon);
};

#endif