/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:14:59 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/11/29 16:15:01 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():AForm("ShrubberyCreationForm", 145, 137)
{
    target="Default";
    std::cout << "ShrubberyCreationForm Default constructor called\n";
}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target):AForm("ShrubberyCreationForm", 145 , 137)
{
    this->target = target;
    std::cout << "ShrubberyCreationForm constructor called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &P):AForm(P)
{
    std::cout << "ShrubberyCreationForm Copy constructor called\n";
    this->target = P.target;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &P)
{
    std::cout << "ShrubberyCreationForm Copy Assignment called\n";
    this->target = P.target;
    return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    std::ofstream out;
    if (!this->getIs_sign())
        throw AForm::NoSigned();
    else if (executor.getGrade() > this->getGrade_exec())
        throw AForm::GradeTooLowException();
    out.open(target + ("_shrubbery"));
   out<< "    ###    "<< std::endl;
   out<< "   #o###   "<< std::endl;
   out<< " #####o### "<< std::endl;
   out<< "#o#\\#|#/###"<< std::endl;
   out<< " ###\\|/#o# "<< std::endl;
   out<< "  # }|{  # "<< std::endl;
   out<< "    }|{    "<< std::endl;
    out.close();
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm Deconstructor called"<< std::endl;
}

