/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 16:02:20 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/11/17 15:55:57 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

void    press_CRTL_D(void)
{
    std::cout << " ❌ ❌ \033[32mYOU ARE FORCING THE  EXIT\033[0m 🤷🏼 🤷🏼\n";
    std::cout << "\033[32m======= GOODBYE =======\033[0m\n";
    exit(0);
}

std::string print_ten_char(std::string str)
{
    std::string sub;

   if (str.length() > 10)
   {
    sub = str.substr(0, 10);
    sub[9] = '.';
    return (sub);
   }
    return (str);
}

int just_letter_OR_just_numbre(std::string str, int flag)
{
    int i;
    i = 0;
    if(flag == 0)
    {
        while(str[i])
        {
            if(!isalpha(str[i]))
                return (0);
            i++;
        }
    }
    else
    {
        while(str[i])
        {
            if(!isdigit(str[i]))
                return (0);
            i++;
        }
    }

    return (1);
}

int ft_check_str(std::string str, int flag)
{
    if(str.empty() || !just_letter_OR_just_numbre(str, flag))
    {
        std::cout << "\n❌ You are write a wrong input \n";
        std::cout << "❌ You should start again\n\n";
        return (1);
    }
    return (0);
}

// Setter
void Contact::setFirst_name(std::string first_name)
{
    this->first_name = first_name;
}
void Contact::setLast_name(std::string last_name)
{
    this->last_name = last_name;
}
void Contact::setNickname(std::string nickname)
{
    this->nickname = nickname;
}
void Contact::setPhone_number(std::string phone_number)
{
    this->phone_number = phone_number;
}
void Contact::setDarkest_secret(std::string darkest_secret)
{
    this->darkest_secret = darkest_secret;
}
// Getter
std::string Contact::getFirst_name()
{
    return first_name;
}
std::string Contact::getLast_name()
{
    return last_name;
}
std::string Contact::getNickname()
{
    return nickname;
}
std::string Contact::getPhone_number()
{
    return phone_number;
}
std::string Contact::getDarkest_secret()
{
    return darkest_secret;
}


void PhoneBook::ADD(int n)
{
    std::string str;
    int         i;
    std::cout << "\033[35m==================================\033[0m\n";
    std::cout << "\033[35m========== ADD CONTACT ===========\033[0m\n";
    std::cout << "\033[35m==================================\033[0m\n\n";
    while(1)
    {
        std::cout << "\033[46mENTER first name :\033[0m\n";
        std::cin >> str;
        if (std::cin.eof())
            press_CRTL_D();
        if (!ft_check_str(str, 0))
            break;
    }
    contacts[n].setFirst_name(str);
    while(1)
    {
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "\033[46mENTER last name :\033[0m\n";
        std::cin >> str;
        if (std::cin.eof())
            press_CRTL_D();
        if (!ft_check_str(str, 0))
            break;
    }
    contacts[n].setLast_name(str);
    while(1)
    {
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "\033[46mENTER nickname :\033[0m\n";
        std::cin >> str;
        if (std::cin.eof())
            press_CRTL_D();
        if (!ft_check_str(str, 0))
            break ;
    }
    contacts[n].setNickname(str);
    while (1)
    {
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "\033[46mENTER Phone number :\033[0m\n";
        std::cin >> str;
        if (std::cin.eof())
            press_CRTL_D();
        if (!ft_check_str(str, 1))
            break ;
    }
    contacts[n].setPhone_number(str);
    while (1)
    {
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "\033[46mENTER darkest secret :\033[0m\n";
        std::getline(std::cin, str);
        if (std::cin.eof())
            press_CRTL_D();
        if (!str.empty())
            break ;
    }
    contacts[n].setDarkest_secret(str);
    std::cout << "✅ Contact added\n";
    i = 0;
    while(++i < 1000000000)
    ;
    n++;
}

void PhoneBook::SEARCH(int nb_of_contact)
{
    int i;
    int error;
    std::string  enter;
    i = 0;
    error = 0;
    std::cout << "\033[35m==================================\033[0m\n";
    std::cout << "\033[35m==========  SEARCHING  ===========\033[0m\n";
    std::cout << "\033[35m==================================\033[0m\n";
    if (nb_of_contact == 0)
        std::cout << " ⭕️ THERE aren't any Contacts in Phonebook \n";
    while(1)
    {
        if(nb_of_contact != 0)
        {
        std::cout << "+----------+----------+----------+----------+\n";
        std::cout << "|   INDEX  |FIRST NAME|LAST NAME | NICKNAME |\n";
        std::cout << "+----------+----------+----------+----------+\n";
        while(i < nb_of_contact)
        {
            std::cout << "|"<< std::setw(10) << i << "|";
            std::cout << std::setw(10) << print_ten_char(contacts[i].getFirst_name())<< "|";
            std::cout << std::setw(10) << print_ten_char(contacts[i].getLast_name())<< "|";
            std::cout << std::setw(10) << print_ten_char(contacts[i].getNickname())<< "|\n";
            std::cout << "+----------+----------+----------+----------+\n";   
            i++;
        }
        error = 0;
        do
        {
            if (error)
                std::cout << "❌ You insert a Wrong index \n";
            std::cout << "Choose an index from 0 to "<< nb_of_contact <<" to see all informations\n";
            std::cin >> i;
            if (std::cin.eof())
                press_CRTL_D();
            error = 1;
        } while (!(i >= 0 && i <= nb_of_contact - 1));
        std::cout << "\033[93m+---------------- ALL INFORMATION --------------+\033[0m\n";
        std::cout << "❇️ First Name     : "<< contacts[i].getFirst_name() << "\n";
        std::cout << "❇️ Last Name      : "<< contacts[i].getLast_name() << "\n";
        std::cout << "❇️ Nickname       : "<< contacts[i].getNickname() << "\n";
        std::cout << "❇️ Phone Number   : "<< contacts[i].getPhone_number() << "\n";
        std::cout << "❇️ Darkest Secret : "<< contacts[i].getDarkest_secret() << "\n";
        }
        while(1)
        {
            std::cout << "\nWrite yes to continue\n";
            std::cin >> enter;
            if (std::cin.eof())
                press_CRTL_D();
            if ((enter.compare("yes")) == 0)
                break;
        }
        break ;
    }
}
void PhoneBook::EXIT(void)
{
    std::cout << "\033[32m  ========================  \033[0m \n";
    std::cout << "\033[32m||👋 👋 QUIT THE PHONEBOOK||\n\033[0m";
    std::cout << "\033[32m  ======== GOODBYE =======\033[0m \n";
    exit(0);
}

