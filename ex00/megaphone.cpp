/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 11:17:01 by petrabencze       #+#    #+#             */
/*   Updated: 2024/08/21 12:28:28 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include <cctype>

int main(int argc, char *argv[])
{
    if (argc > 1) {
        for (int j = 1; j < argc; j++) {
            for (size_t i = 0; i < std::strlen(argv[j]); i++)
                std::cout << static_cast<char>(std::toupper(static_cast<int>(argv[j][i])));
        }
        std::cout << std::endl;
    } else {
       std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }

    return 0;
}

//copilot suggestion
/*
#include <iostream>
#include <cctype>
#include <string>

int main(int argc, char *argv[])
{
    if (argc > 1) {
        for (int i = 1; i < argc; i++) {
            std::string word(argv[i]); //conversion from char* to std::string makes working with C++ strings easier, providing access to string manipulation functions
            for (char& c : word) {
                c = std::toupper(c);
            }
            std::cout << word;
        }
        std::cout << std::endl;
    } else {
       std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }

    return 0;
}
*/
