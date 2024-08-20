/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 14:05:09 by pbencze           #+#    #+#             */
/*   Updated: 2024/08/20 12:26:33 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <limits>
#include <cstdlib>
#include "PhoneBook.hpp"

int main() {
    Contact contact;
    PhoneBook phoneBook;
    std::string command;

    while (true) {
        std::cout << "Command: ";
        if (!(std::cin >> command) && std::cin.eof()){
				std::cout << std::endl;
				return 0;
		} else if (command == "ADD" && std::cin.peek() == '\n') {
            phoneBook.add(contact);
        } else if (command == "SEARCH" && std::cin.peek() == '\n') {
            phoneBook.search();
        } else if (command == "EXIT" && std::cin.peek() == '\n') {
			break;
        } else {
            std::cerr << "Invalid command!" << std::endl;
			std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    };
    return 0;
}
