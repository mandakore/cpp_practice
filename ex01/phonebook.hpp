/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atashiro <atashiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 14:25:07 by atashiro          #+#    #+#             */
/*   Updated: 2025/10/09 17:07:49 by atashiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <string>
# include <iostream>
# include "contact.hpp"


class PhoneBook {
	public:
		PhoneBook(); //--------------これなにマジで
		void		add_contact();
		void		search_contact();
		std::string	char_limit(const std::string& str);
		void		show_list();
		void		show_contact(int index);

	private:
		Contact person[8];
		int		index;
};




#endif
