/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 12:58:50 by pbencze           #+#    #+#             */
/*   Updated: 2024/08/01 18:36:23 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string.h>
#include "Contact.hpp"

class PhoneBook {
    private:
        Contact contacts[8];
    
    public:
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
        };
        void addContact(Contact contact) {
            int i;
            for (i = 0; i < 8; i++){
                if(contacts[i].getFirstName().empty()) {
                    contacts[i] = contact;
                    break;
                }
            }
            if (i == 8) {
                contacts[0] = contact;
            }
        };
        void searchContact() {
            std::string firstName, lastName, nickName;
            
            std::cout << "*******************************************" << std::endl;
            std::cout << "********** P H O N E B O O K **************" << std::endl;
            std::cout << "*******************************************" << std::endl;
            std::cout << "     index|first name| last name|  nickname" << std::endl;
            
            for (int i = 0; i < 8; i++){
                if(!contacts[i].getFirstName().empty()) {
                    
                    firstName = contacts[i].getFirstName().substr(0, 10);
                    lastName = contacts[i].getLastName().substr(0, 10);
                    nickName = contacts[i].getNickname().substr(0, 10);
                    
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
            
            if (index >= 0 && index < 8 && !contacts[index].getFirstName().empty()) {
                printContact(contacts[index]);
            } else {
                std::clog << "Invalid index" << std::endl; //or cout?
            }
            
        };
        void printContact(Contact contact){
            std::cout << "First name: " << contact.getFirstName() << std::endl;
            std::cout << "Last name: " << contact.getLastName() << std::endl;
            std::cout << "Nickname: " << contact.getNickname() << std::endl;
            std::cout << "Phone number: " << contact.getPhoneNumber() << std::endl;
        };
};

#endif