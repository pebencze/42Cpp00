/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 14:05:09 by pbencze           #+#    #+#             */
/*   Updated: 2024/08/01 18:09:54 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

void makeContact(Contact &contact) {
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
}

int main() {
    Contact contact;
    PhoneBook phoneBook;
    std::string command;

    std::cout   << "Welcome to the phonebook!" << std::endl
                << "Please enter one of the following commands: " << std::endl
                << "  - ADD" << std::endl
                << "  - SEARCH" << std::endl
                << "  - EXIT" << std::endl;

    do {
        std::cout << "Command: ";
        std::cin >> command;
        if (command == "ADD") {
            makeContact(contact);
            phoneBook.add(contact);
        } else if (command == "SEARCH") {
            phoneBook.search();
        } else {
            std::cerr << "Invalid command!" << std::endl;
        }
    } while (command != "EXIT");
}
