/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guderram <guderram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 22:07:27 by guderram          #+#    #+#             */
/*   Updated: 2022/08/21 11:24:13 by guderram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

class Contact {
public:
	std::string	GetContact(int i);
	Contact(void);
	Contact(std::string c1, std::string c2, std::string c3, std::string c4, std::string c5);
	~Contact(void);
private:
	std::string _fname;
	std::string _lname;
	std::string _nname;
	std::string _phone;
	std::string _secret;

};

#endif
