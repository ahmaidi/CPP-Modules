/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:16:53 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/11/30 18:31:31 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include <iostream>
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
int	main(void)
{
	Intern	someRandomIntern;
	AForm*	rrf;

	std::cout << "-----------------------------------------------" << std::endl;
	
	// try
	// {
	// 	rrf = someRandomIntern.makeForm("robotomydfgfdsg request", "Bender");
	// 	rrf->execute(Bureaucrat("BoB",145));
	// 	delete rrf;
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }

	std::cout << "-----------------------------------------------" << std::endl;
	std::cout << "-----------------------------------------------" << std::endl;

	{
		rrf = someRandomIntern.makeForm("ShrubberyCreationForm", "Bender");
        std::cout << "Grade sign :: "<<rrf->getGrade_sign() << std::endl;
        std::cout << "Is Sign :: "<<rrf->getIs_sign() << std::endl;
        rrf->beSigned(Bureaucrat("bob", 145));
        std::cout << "Is Sign :: "<<rrf->getIs_sign() << std::endl;
        rrf->execute(Bureaucrat("bob", 137));
		delete rrf;
	}

	std::cout << "-----------------------------------------------" << std::endl;

	return (0);
}
