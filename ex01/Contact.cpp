/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 10:17:01 by pbencze           #+#    #+#             */
/*   Updated: 2024/08/02 15:22:25 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

Contact::Contact(void) {
    return;
}

Contact::~Contact(void) {
    return;
}

void Contact::setFirstName(std::string firstName) {
    this->_firstName = firstName;
}

void Contact::setLastName(std::string lastName) {
    this->_lastName = lastName;
}

void Contact::setNickname(std::string nickName) {
    this->_nickName = nickName;
}

void Contact::setPhoneNumber(std::string phoneNumber) {
    this->_phoneNumber = phoneNumber;
}

void Contact::setDarkestSecret(std::string darkestSecret) {
    this->_darkestSecret = darkestSecret;
}

std::string Contact::getFirstName () const {
    return _firstName;
}

std::string Contact::getLastName() const {
    return _lastName;
}

std::string Contact::getNickname() const {
    return _nickName;
}

std::string Contact::getPhoneNumber() const {
    return _phoneNumber;
}

std::string Contact::getDarkestSecret() const {
    return _darkestSecret;
} 

