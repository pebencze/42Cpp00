/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 10:17:09 by pbencze           #+#    #+#             */
/*   Updated: 2024/08/02 12:56:11 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
    std::cout   << "Welcome to the phonebook!" << std::endl
            << "Please enter one of the following commands: " << std::endl
            << "  - ADD" << std::endl
            << "  - SEARCH" << std::endl
            << "  - EXIT" << std::endl;
    return;
}

PhoneBook::~PhoneBook(void) {
    std::cout << "Phonebook has been closed." << std::endl;
}

void PhoneBook::printContact(Contact contact) const {
            std::cout << "First name: " << contact.getFirstName() << std::endl;
            std::cout << "Last name: " << contact.getLastName() << std::endl;
            std::cout << "Nickname: " << contact.getNickname() << std::endl;
            std::cout << "Phone number: " << contact.getPhoneNumber() << std::endl;
}

void PhoneBook::add(Contact &contact) {
    std::string command;
    std::cout << "Please enter the following information: " << std::endl;
    std::cout << "First name: ";
    std::cin >> command;
    contact.setFirstName(command);
    std::cout << "Last name: ";
    std::cin >> command;
    contact.setLastName(command);
    std::cout << "Nickname: ";
    std::cin >> command;
    contact.setNickname(command);
    std::cout << "Phone number: ";
    std::cin >> command;
    contact.setPhoneNumber(command);
    std::cout << "Darkest secret: ";
    std::cin >> command;
    contact.setDarkestSecret(command);
    addContact(contact);
}
        
void PhoneBook::addContact(Contact contact) {
    int i;
    for (i = 0; i < 8; i++){
        if(_contacts[i].getFirstName().empty()) {
            _contacts[i] = contact;
            break;
        }
    }
    if (i == 8) {
        _contacts[0] = contact;
    }
}
        
void PhoneBook::search() {
    std::string firstName, lastName, nickName;
    
    std::cout << "*******************************************" << std::endl;
    std::cout << "********** P H O N E B O O K **************" << std::endl;
    std::cout << "*******************************************" << std::endl;
    std::cout << "     index|first name| last name|  nickname" << std::endl;
    
    for (int i = 0; i < 8; i++){
        if(!_contacts[i].getFirstName().empty()) {
            
            firstName = _contacts[i].getFirstName().substr(0, 10);
            lastName = _contacts[i].getLastName().substr(0, 10);
            nickName = _contacts[i].getNickname().substr(0, 10);
            
            if (firstName.length() == 10)
                firstName.back() =  '.';
            else
                firstName.insert(0, 10 - firstName.length(), ' ');
            if (lastName.length() == 10)
                lastName.back() =  '.';
            else
                lastName.insert(0, 10 - lastName.length(), ' ');
            if (nickName.length() == 10)
                nickName.back() =  '.';
            else
                nickName.insert(0, 10 - nickName.length(), ' ');
            
            std::cout << "         " << i << "|"; 
            std::cout << firstName << "|";
            std::cout << lastName << "|";
            std::cout << nickName << std::endl;
        }
    }
    
    std::cout << "Enter index of the contact you want to see: ";
    int index;
    std::cin >> index;
    
    if (index >= 0 && index < 8 && !_contacts[index].getFirstName().empty()) {
        printContact(_contacts[index]);
    } else {
        std::clog << "Invalid index" << std::endl; //or cout?
    }
    
}
