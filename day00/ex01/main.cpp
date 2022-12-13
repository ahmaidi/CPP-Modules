/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 16:02:10 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/11/01 16:02:12 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
    PhoneBook PhoneBook;
    std::string option;
    int nb_of_contact;
    int nbre_of_add;
    int error;

    nb_of_contact = 0;
    error = 0;
    nbre_of_add = 0;
    while (1)
    {
        std::cout << "\x1B[2J\x1B[H";
        if (error)
        {
            std::cout << "+-----------------------------------------+\n";
            std::cout << "|   \033[31m ❌ YOU ARE INSERT A WRONG OPTION\033[0m     |\n";
            std::cout << "|        \033[33m ⚠️ PLEASE TRY AGAIN \033[0m             |\n";
            std::cout << "+-----------------------------------------+\n\n";
        }
        std::cout << "\033[36m==================================\033[0m\n";
        std::cout << "\033[36m============== MENU ==============\033[0m\n";
        std::cout << "\033[36m==================================\033[0m\n";
        std::cout << "📒 PhoneBook options : \n";
        std::cout << "1) ➕ ADD    : Adding a new contact. \n";
        std::cout << "2) 🔎 SEARCH : Searching for a contact.\n";
        std::cout << "3) ❎ EXIT   : Quit the programme. \n";
        while (1)
        {
            std::cout << "Enter option: \n";
            std::cin >> option;
            if (std::cin.eof())
                press_CRTL_D();
            if (!option.compare("ADD"))
            {
                if (nbre_of_add > 8)
                    nbre_of_add = 0;
                PhoneBook.ADD(nbre_of_add);
                nbre_of_add++;
                if (nb_of_contact < 8)
                    nb_of_contact++;
                break;
            }
            else if (!option.compare("SEARCH"))
            {
                PhoneBook.SEARCH(nb_of_contact);
                break;
            }

            else if (!option.compare("EXIT"))
                PhoneBook.EXIT();
            else
            {
                error = 1;
                break;
            }
        }
    }
}