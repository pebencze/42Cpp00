/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 12:57:36 by pbencze           #+#    #+#             */
/*   Updated: 2024/08/02 11:30:03 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact {
    public:
       // Contact(void); //constructor
        //~Contact(void); //destructor
         
        void setFirstName(std::string firstName) {
            this->_firstName = firstName;
        }
        void setLastName(std::string lastName) {
            this->_lastName = lastName;
        }
        void setNickname(std::string nickName) {
            this->_nickName = nickName;
        }
        void setPhoneNumber(std::string phoneNumber) {
            this->_phoneNumber = phoneNumber;
        }
        void setDarkestSecret(std::string darkestSecret) {
            this->_darkestSecret = darkestSecret;
        }
        std::string getFirstName() {
            return _firstName;
        }
        std::string getLastName() {
            return _lastName;
        }
        std::string getNickname() {
            return _nickName;
        }
        std::string getPhoneNumber() {
            return _phoneNumber;
        }
        std::string getDarkestSecret() {
            return _darkestSecret;
        } 
        
    private:
        std::string _firstName;
        std::string _lastName;
        std::string _nickName;
        std::string _phoneNumber;
        std::string _darkestSecret;
        
  
};

#endif