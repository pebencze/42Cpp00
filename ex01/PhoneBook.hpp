/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 12:58:50 by pbencze           #+#    #+#             */
/*   Updated: 2024/08/02 15:24:48 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string.h>
#include "Contact.hpp"

class PhoneBook {
    public:
        PhoneBook(void); //constructor
        ~PhoneBook(void); //destructor

        int contactCount;
        
        void add(Contact &contact);
        void search() const;
        void printContact(Contact contact) const;
        
    private:
        Contact _contacts[8];
};

#endif