/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:17:00 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/11/10 15:21:50 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

int main( void )
{
    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;
    std::string& stringREF = str;

    std::cout << "Address of string : "<< &str << std::endl;
    std::cout << "Address held by pointer : "<< &stringPTR << std::endl;
    std::cout << "Address held by reference : "<< &stringREF << std::endl;
    std::cout << "========= Values ============" << std::endl;
    std::cout << "Value of string : "<< str << std::endl;
    std::cout << "Value pointed to by pointer : "<< *stringPTR << std::endl;
    std::cout << "Value pointed to by reference : "<< stringREF << std::endl;
    
    return (0);
}