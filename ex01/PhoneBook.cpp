/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 10:17:09 by pbencze           #+#    #+#             */
/*   Updated: 2024/08/20 13:44:57 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <limits>
#include <cstdlib>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) : contactCount(0) {
    std::cout << "Welcome to the phonebook!" << std::endl
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
	std::cout << "Darkest secret: " << contact.getDarkestSecret() << std::endl;
}

int PhoneBook::getInput(const std::string& prompt, void (Contact::*setter)(std::string), Contact &contact){
	std::string input;

	while (true){
   		std::cout << prompt;
		if (!(std::getline(std::cin, input))){
			if (std::cin.eof())
				std::exit(0);
		} else if (input.empty()) {
			continue ;
		} else {
			(contact.*setter)(input);
			return 0;
		}
	}
};

void PhoneBook::add(Contact &contact) {
    std::cout << "Please enter the following information:" << std::endl;

	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    if (getInput("First name: ", &Contact::setFirstName, contact)
		|| getInput("Last name: ", &Contact::setLastName, contact)
		|| getInput("Nickname: ", &Contact::setNickname, contact)
		|| getInput("Phone number: ", &Contact::setPhoneNumber, contact)
		|| getInput("Darkest secret: ", &Contact::setDarkestSecret, contact))
		return ;

	_contacts[contactCount % 8] = contact;
	contactCount++;
}

static void adjustName(std::string &name) {
	if (name.length() == 10)
		name[name.size() - 1] = '.';
	else
		name.insert(0, 10 - name.length(), ' ');
}

void PhoneBook::search() const {
	std::string firstName, lastName, nickName;
	int index;

	if (_contacts[0].getFirstName().empty())
	{
		std::cout << "Empty phonebook." << std::endl;
		return ;
	}

	std::cout << "*******************************************" << std::endl;
	std::cout << "********** P H O N E B O O K **************" << std::endl;
	std::cout << "*******************************************" << std::endl;
	std::cout << "     index|first name| last name|  nickname" << std::endl;

    for (int i = 0; i < 8; i++){
        if(!_contacts[i].getFirstName().empty()) {

            firstName = _contacts[i].getFirstName().substr(0, 10);
            lastName = _contacts[i].getLastName().substr(0, 10);
            nickName = _contacts[i].getNickname().substr(0, 10);

			adjustName(firstName);
			adjustName(lastName);
			adjustName(nickName);

            std::cout << "         " << i << "|";
            std::cout << firstName << "|";
            std::cout << lastName << "|";
            std::cout << nickName << std::endl;
        }
    }

    std::cout << "Enter the index of the contact you want to see: ";

	if (!(std::cin >> index) && std::cin.eof())
		std::exit(0);
    if (std::cin.fail() || std::cin.peek() != '\n'){
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cerr << "Invalid input." << std::endl;
    } else if (index >= 0 && index < 8) {
		if (_contacts[index].getFirstName().empty())
			std::cout << "Empty contact at given index." << std::endl;
		else
        	printContact(_contacts[index]);
    } else {
        std::cerr << "Invalid index." << std::endl;
    }
}
