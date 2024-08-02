/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 10:17:01 by pbencze           #+#    #+#             */
/*   Updated: 2024/08/02 12:52:47 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

Contact::Contact(void) {
    return;
}

Contact::~Contact(void) {
    std::cout << "Contact has been deleted." << std::endl;
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

std::string Contact::getFirstName() {
    return _firstName;
}

std::string Contact::getLastName() {
    return _lastName;
}

std::string Contact::getNickname() {
    return _nickName;
}

std::string Contact::getPhoneNumber() {
    return _phoneNumber;
}

std::string Contact::getDarkestSecret() {
    return _darkestSecret;
} 

