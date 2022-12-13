/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 16:02:26 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/11/01 16:07:43 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include <stdio.h>
# include <string.h>
# include <iomanip>
# include <ctype.h>

class Contact
{
private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;

public:
    // Setter
    void setFirst_name(std::string first_name);
    void setLast_name(std::string last_name);
    void setNickname(std::string nickname);
    void setPhone_number(std::string phone_number);
    void setDarkest_secret(std::string darkest_secret);
    // Getter
    std::string getFirst_name();
    std::string getLast_name();
    std::string getNickname();
    std::string getPhone_number();
    std::string getDarkest_secret();
};

class PhoneBook
{
public:
    Contact contacts[8];
    void ADD(int n);
    void SEARCH(int nb_of_contact);
    void EXIT(void);
};

void    press_CRTL_D(void);
std::string print_ten_char(std::string str);
int just_letter_OR_just_numbre(std::string str, int flag);
int ft_check_str(std::string str, int flag);
# endif
