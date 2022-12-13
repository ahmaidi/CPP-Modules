/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:17:00 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/11/29 16:17:02 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PresidentialPardonForm.hpp"
#include "AForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():AForm("PresidentialPardonForm", 25, 5)
{
    target="Default";
    std::cout << "PresidentialPardonForm Default constructor called\n";
}
PresidentialPardonForm::PresidentialPardonForm(std::string target):AForm("PresidentialPardonForm", 25, 5)
{
    this->target = target;
    std::cout << "PresidentialPardonForm constructor called\n";
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &P):AForm(P)
{
    std::cout << "PresidentialPardonForm Copy constructor called\n";
    this->target = P.target;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &P)
{
    std::cout << "PresidentialPardonForm Copy Assignment called\n";
    this->target = P.target;
    return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    if (!this->getIs_sign())
        throw AForm::NoSigned();
    else if (executor.getGrade() > this->getGrade_exec())
        throw AForm::GradeTooLowException();
        std::cout << this->target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm Deconstructor called"<< std::endl;
}

