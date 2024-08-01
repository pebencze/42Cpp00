/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 12:58:50 by pbencze           #+#    #+#             */
/*   Updated: 2024/08/01 14:56:46 by pbencze          ###   ########.fr       */
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
        void add(Contact contact) {
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
        void search() {
            std::string firstName;
            std::string lastName;
            std::string nickName;
            
            std::cout << "     index|first name| last name|  nickname" << std::endl;
            
            for (int i = 0; i < 8; i++){
                if(!contacts[i].getFirstName().empty()) {
                    
                    firstName = contacts[i].getFirstName().substr(0, 10);
                    lastName = contacts[i].getLastName().substr(0, 10);
                    nickName = contacts[i].getNickname().substr(0, 10);
                    if (firstName.at(10) != '\0')
                        firstName.back() =  '.';
                    if (lastName.at(10) != '\0')
                        lastName.back() =  '.';
                    if (nickName.at(10) != '\0')
                        nickName.back() =  '.';
                    
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
                std::cerr << "Invalid index" << std::endl; //or cout?
            }
            
        }
        void printContact(Contact contact){
            std::cout << "First name: " << contact.getFirstName() << std::endl;
            std::cout << "Last name: " << contact.getLastName() << std::endl;
            std::cout << "Nickname: " << contact.getNickname() << std::endl;
            std::cout << "Phone number: " << contact.getPhoneNumber() << std::endl;
        };
};

#endif