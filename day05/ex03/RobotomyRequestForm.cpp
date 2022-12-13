/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:17:09 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/11/29 16:17:11 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RobotomyRequestForm.hpp"
#include "AForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():AForm("RobotomyRequestForm", 72, 45)
{
    target="Default";
    std::cout << "RobotomyRequestForm Default constructor called\n";
}
RobotomyRequestForm::RobotomyRequestForm(std::string target):AForm("RobotomyRequestForm", 72, 45)
{
    this->target = target;
    std::cout << "RobotomyRequestForm  constructor called\n";
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &P):AForm(P)
{
    std::cout << "RobotomyRequestForm Copy constructor called\n";
    this->target = P.target;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &P)
{
    std::cout << "RobotomyRequestForm Copy Assignment called\n";
    this->target = P.target;
    return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    if (!this->getIs_sign())
        throw AForm::NoSigned();
    else if (executor.getGrade() > this->getGrade_exec())
        throw AForm::GradeTooLowException();

	if (time(0) % 2)
		std::cout <<this->target << " has been robotomized successfully" << std::endl;
	else
		std::cout << "robotomy failed."<< std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm Deconstructor called"<< std::endl;
}

