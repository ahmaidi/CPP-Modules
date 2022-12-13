/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:14:29 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/11/29 16:14:31 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include <iostream>
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
    // {
    //     try
    //     {
    //         ShrubberyCreationForm p("Jon");
    //         p.beSigned(Bureaucrat("Bob", 145));
    //         p.execute(Bureaucrat("Bob", 137));
            
    //     }catch(std::exception &e)
    //     {
    //         std::cout << e.what() << std::endl;
    //     }
    // }
    {
        try
        {
            RobotomyRequestForm p("Jon");
            p.beSigned(Bureaucrat("Bob", 25));
            p.execute(Bureaucrat("Bob", 5));
        }catch(std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
    }

    return 0;
}