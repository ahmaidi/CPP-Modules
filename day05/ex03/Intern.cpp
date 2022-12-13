/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:16:45 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/11/29 16:16:46 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Intern.hpp"
#include "AForm.hpp"


Intern::Intern(void)
{
    std::cout << "Intern Default Constructor called" << std::endl;
}

Intern::Intern(Intern const &I)
{
	std::cout << "Intern Copy Contrustor called" << std::endl;
	*this = I;
}

Intern &Intern::operator=(Intern const &I)
{
	std::cout << "Intern Assignement Operator called" << std::endl;
	(void)I;
	return (*this);
}

AForm*   Intern::makeShrubberyCreationForm(std::string const target) const
{
    std::cout << "ShrubberyCreationForm" << std::endl;
    return new ShrubberyCreationForm(target);
}

AForm*   Intern::makeRobotomyRequestForm(std::string const target) const
{
    std::cout << "RobotomyRequestForm" << std::endl;
    return new RobotomyRequestForm(target);
}

AForm*   Intern::makePresidentialPardonForm(std::string const target) const
{
    std::cout << "PresidentialPardonForm" << std::endl;
    return new PresidentialPardonForm(target);
}
const char *Intern::FormNotExitException::what() const throw()
{
    return ("Form Doesn't Exit");
}

AForm*   Intern::makeForm(std::string const name_Form, std::string const target) const
{
    std::string Forms[3] ={"PresidentialPardonForm", "RobotomyRequestForm","ShrubberyCreationForm"};
    AForm *(Intern::*pointers[3])(std::string const) const = {&Intern::makePresidentialPardonForm, &Intern::makeRobotomyRequestForm, &Intern::makeShrubberyCreationForm};
    for (int i = 0; i < 3; i++)
	{
		if (Forms[i] == name_Form)
		{
            std::cout << "Intern creates " << Forms[i] << " Form" << std::endl;
			return ((this->*pointers[i])(target));
		}
	}
	throw Intern::FormNotExitException();
	return (NULL);
}

Intern::~Intern(void)
{
	std::cout << "Intern Destructor called" << std::endl;
}
