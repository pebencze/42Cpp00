/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 14:05:09 by pbencze           #+#    #+#             */
/*   Updated: 2024/08/01 15:00:40 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

int main() {
    Contact contact;
    PhoneBook phoneBook;
    std::string command;

    std::cout << "Welcome to the phonebook!" << std::endl;
    std::cout << "Please enter one of the following commands: " << std::endl;
    std::cout << "  - ADD" << std::endl;
    std::cout << "  - SEARCH" << std::endl;
    std::cout << "  - EXIT" << std::endl;
    std::cout << "Command: ";
    std::cin >> command;

    while (command != "EXIT") {
        if (command == "ADD") {
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
            phoneBook.add(contact);
        } else if (command == "SEARCH") {
            phoneBook.search();
        } else {
            std::cerr << "Invalid command!" << std::endl;
        }
        std::cout << "Command: " << std::endl;
        std::cin >> command;
    }
}
