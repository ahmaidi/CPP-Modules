/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:14:13 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/11/29 18:19:01 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm():name("anyone"),is_sign(false),grade_sign(10),grade_exec(10)
{
    this->is_sign = false;
    std::cout << name <<" AForm default constructor called" << std::endl;

}
AForm::AForm(std::string name, const int grade_sign , const int grade_exec):name(name),grade_sign(grade_sign),grade_exec(grade_exec)
{
    std::cout << name <<" AForm constructor called" << std::endl;
    this->is_sign = false;
    if (grade_sign < 1)
        throw AForm::GradeTooHighException();
    else if (grade_sign > 150)
        throw AForm::GradeTooLowException();
    if (grade_exec < 1)
        throw AForm::GradeTooHighException();
    else if (grade_exec > 150)
        throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm& B):name(B.name),grade_sign(B.grade_sign),grade_exec(B.grade_exec)
{
    std::cout << name <<" AForm copy constructor called" << std::endl;

    this->is_sign = B.is_sign;
}

AForm& AForm::operator=(const AForm& B)
{
    std::cout << name <<" AForm copy assignment called" << std::endl;
    this->is_sign = B.is_sign;
    return (*this);
}

void AForm::beSigned(Bureaucrat const &B)
{
    if(B.getGrade() <= this->grade_sign)
        this->is_sign = true;
    else
        throw AForm::GradeTooLowException();
}
std::string AForm::getName(void) const
{
    return (this->name);
}
bool AForm::getIs_sign(void) const
{
    return (this->is_sign);
}
int AForm::getGrade_sign(void) const
{
    return (this->grade_sign);

}
int AForm::getGrade_exec(void) const
{
    return (this->grade_exec);
}

AForm::~AForm()
{
        std::cout << name <<" AForm deconstructor called" << std::endl;
}

const char *AForm::GradeTooHighException::what() const throw()
{
    return ("\033[31mERROR:Grade too high\033[0m");
}

const char *AForm::GradeTooLowException::what() const throw()
{
    return ("\033[31mERROR:Grade too Low\033[0m");
}
const char *AForm::NoSigned::what() const throw()
{
    return ("\033[31mERROR:Not signed yet\033[0m");
}

std::ostream &operator << (std::ostream &out, AForm const &f)
{
    out << "AForm information name : \n"<<f.getName() << " is_signed: " << f.getIs_sign() <<"\ngrade sign: "<< f.getGrade_sign() << "\ngrade exec :"<< f.getGrade_exec() << std::endl;
    return out;
}