/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guderram <guderram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 22:07:27 by guderram          #+#    #+#             */
/*   Updated: 2022/08/19 22:39:20 by guderram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

class Contact
{
public:
	char *fname;
	char *lname;
	char *nname;
	char *phone;
	char *secret;
	Contact(/* args */);
	~Contact();

private:
	/* data */

};

#endif