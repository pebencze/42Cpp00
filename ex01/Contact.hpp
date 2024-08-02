/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 12:57:36 by pbencze           #+#    #+#             */
/*   Updated: 2024/08/02 15:23:29 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact {
    public:
        Contact(void); //constructor
        ~Contact(void); //destructor
         
        void setFirstName(std::string firstName);
        void setLastName(std::string lastName);
        void setNickname(std::string nickName);
        void setPhoneNumber(std::string phoneNumber);
        void setDarkestSecret(std::string darkestSecret);
        std::string getFirstName () const;
        std::string getLastName () const;
        std::string getNickname () const;
        std::string getPhoneNumber () const;
        std::string getDarkestSecret () const;
        
    private:
        std::string _firstName;
        std::string _lastName;
        std::string _nickName;
        std::string _phoneNumber;
        std::string _darkestSecret;
        
};

#endif