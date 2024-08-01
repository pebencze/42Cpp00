/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 14:05:09 by pbencze           #+#    #+#             */
/*   Updated: 2024/08/01 19:02:41 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

int main() {
    Contact contact;
    PhoneBook phoneBook;
    std::string command;

    std::cout   << "Welcome to the phonebook!" << std::endl
                << "Please enter one of the following commands: " << std::endl
                << "  - ADD" << std::endl
                << "  - SEARCH" << std::endl
                << "  - EXIT" << std::endl;

    while (true) {
        std::cout << "Command: ";
        std::cin >> command;
        if (command == "ADD") {
            phoneBook.makeContact(contact);
            phoneBook.addContact(contact);
        } else if (command == "SEARCH") {
            phoneBook.searchContact();
        } else if (command == "EXIT") {
            break;
        } else {
            std::clog << "Invalid command!" << std::endl;
        }
    };
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    return 0;
}
