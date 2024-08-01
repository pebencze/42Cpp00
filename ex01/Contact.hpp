/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 12:57:36 by pbencze           #+#    #+#             */
/*   Updated: 2024/08/01 17:02:44 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact {
    private:
        std::string firstName;
        std::string lastName;
        std::string nickName;
        std::string phoneNumber;
        std::string darkestSecret;
        
    public: 
        void setFirstName(std::string firstName) {
            this->firstName = firstName;
        }
        void setLastName(std::string lastName) {
            this->lastName = lastName;
        }
        void setNickname(std::string nickName) {
            this->nickName = nickName;
        }
        void setPhoneNumber(std::string phoneNumber) {
            this->phoneNumber = phoneNumber;
        }
        void setDarkestSecret(std::string darkestSecret) {
            this->darkestSecret = darkestSecret;
        }
        std::string getFirstName() {
            return firstName;
        }
        std::string getLastName() {
            return lastName;
        }
        std::string getNickname() {
            return nickName;
        }
        std::string getPhoneNumber() {
            return phoneNumber;
        }
        std::string getDarkestSecret() {
            return darkestSecret;
        } 
};

#endif