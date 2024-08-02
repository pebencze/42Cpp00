/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 14:05:09 by pbencze           #+#    #+#             */
/*   Updated: 2024/08/02 15:34:26 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

int main() {
    Contact contact;
    PhoneBook phoneBook;
    std::string command;

    while (true) {
        std::cout << "Command: ";
        std::cin >> command;
        if (command == "ADD") {
            phoneBook.add(contact);
        } else if (command == "SEARCH") {
            phoneBook.search();
        } else if (command == "EXIT") {
            break;
        } else {
            std::clog << "Invalid command!" << std::endl;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    };
    return 0;
}
