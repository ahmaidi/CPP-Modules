/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 15:50:19 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/12/04 12:41:06 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

bool is_char(std::string str)
{
    if (str.length() == 1 && !isdigit(str[0]))
        return (true);
    return false;    
}

void print_char(std::string str)
{
    std::cout << "char: " << str[0] << std::endl;
    int num = (int)str[0];
    std::cout << "int :" << num<< std::endl;
    std::cout << "float:" << (float)num << ".0f"<< std::endl;
    std::cout << "double :" << (double)num <<".0"<< std::endl;
}

bool is_int(std::string str)
{
    int i = 0;
     if (str[i] == '-' || str[i] == '+')
        i++;
    while(str[i] && isdigit(str[i]))
        i++;
    if(!str[i])
        return true;
    return false;
}

void print_int(std::string str)
{
    int num;
    try
    {
        num = stoi(str);
       if (num >= 0 && num <= 255)
    {
        if (!isprint(num))
            std::cout << "char : Non displayable"<< std::endl;
        else
            std::cout << "char :"<< static_cast<char>(num)<<std::endl;
    }else
    {
            std::cout << "char : Impossible"<< std::endl;
        
    }
            std::cout << "int :" << num<< std::endl;
            std::cout << "float:" << static_cast<float>(num) << ".0f"<< std::endl;
            std::cout << "double :" << static_cast<double>(num) <<".0"<< std::endl;
    }
    catch(std::exception& e)
    {
        std::cout << "You are passed the limits of int"<< std::endl;
    }
}

bool is_float(std::string str)
{
    int i = 0;
    int cpt = 0;
    if (str[i] == '-' || str[i] == '+')
        i++;
   while(str[i] && (isdigit(str[i]) || str[i] == '.'))
    {
        if (str[i] == '.')
            cpt++;
        if (cpt == 2)
            return false;
        i++;
    }
    if(str[i] == 'f' && !str[i + 1])
        return true;
    return false;
}

void print_float(std::string str)
{
    float num = stof(str);
    if (static_cast<int>(num) >= 0 && static_cast<int>(num) <= 255)
    {
        if (!isprint(static_cast<int>(num)))
            std::cout << "char : Non displayable"<< std::endl;
        else
            std::cout << "char :"<< static_cast<char>(num)<<std::endl;
    }else
    {
            std::cout << "char : Impossible"<< std::endl;
        
    }
    std::cout << "int :" << static_cast<int>(num) << std::endl;
    std::cout << "float:" << std::showpoint << num << "f"<< std::endl;
    std::cout << "double :" << std::showpoint <<static_cast<double>(num)<< std::endl;
}
bool is_double(std::string str)
{
    int i = 0;
    int cpt = 0;
     if (str[i] == '-' || str[i] == '+')
        i++;
    while(str[i] && (isdigit(str[i]) || str[i] == '.'))
    {
        if (str[i] == '.')
            cpt++;
        if (cpt == 2)
            return false;
        i++;
    }
    if(!str[i])
        return true;
    return false;
}

void print_double(std::string str)
{
    double num = stod(str);
    if (static_cast<int>(num) >= 0 && static_cast<int>(num) <= 255)
    {
        if (!isprint(static_cast<int>(num)))
            std::cout << "char : Non displayable"<< std::endl;
        else
            std::cout << "char :"<< static_cast<char>(num)<<std::endl;
    }else
    {
            std::cout << "char : Impossible"<< std::endl;
        
    }
    std::cout << "int :" << static_cast<int>(num) << std::endl;
    std::cout << "float:" << std::showpoint << static_cast<float>(num) << "f"<< std::endl;
    std::cout << "double :" << std::showpoint <<num<< std::endl;
}

void print_nan(std::string str)
{
    if (str == "nan" || str == "-inf" || str == "+inf")
    {
        std::cout << "char : impossible" <<std::endl;
        std::cout << "int : impossible" << std::endl;
        std::cout << "float:" << str<< "f"<< std::endl;
        std::cout << "double :" << str<< std::endl;
    
    }
    else if (str == "nanf" || str == "-inff" || str == "+inff")
    {
        std::cout << "char : impossible" <<std::endl;
        std::cout << "int : impossible" << std::endl;
        std::cout << "float:" << str<< std::endl;
        std::cout << "double :" << str.erase(str.length() - 1)<< std::endl;
    }
    else
        std::cout << "Impossible de conversion"<<std::endl;
}
//+-24.0
//24..0
//240000000000000000000
int main(int ac, char **ar)
{
    
    if(ac != 2)
    {
        std::cout << "./convert [string]" << std::endl;
    }
    else
    {
        if (is_char(ar[1]))
            print_char(ar[1]);
        else if (is_int(ar[1]))
            print_int(ar[1]);
        else if(is_float(ar[1]))
            print_float(ar[1]);
        else if(is_double(ar[1]))
            print_double(ar[1]);
        else
            print_nan(ar[1]);
    }
    return (0);
}
