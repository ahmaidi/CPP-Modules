/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:12:54 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/11/29 17:29:15 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Form::Form():name("anyone"),is_sign(false),grade_sign(10),grade_exec(10)
{
    this->is_sign = false;
    std::cout << name <<" Form default constructor called" << std::endl;

}
Form::Form(std::string name, const int grade_sign , const int grade_exec):name(name),grade_sign(grade_sign),grade_exec(grade_exec)
{
    std::cout << name <<" Form constructor called" << std::endl;
    this->is_sign = false;
    if (grade_sign < 1)
        throw Form::GradeTooHighException();
    else if (grade_sign > 150)
        throw Form::GradeTooLowException();
    if (grade_exec < 1)
        throw Form::GradeTooHighException();
    else if (grade_exec > 150)
        throw Form::GradeTooLowException();
}

Form::Form(const Form& B):name(B.name),grade_sign(B.grade_sign),grade_exec(B.grade_exec)
{
    std::cout << name <<" Form copy constructor called" << std::endl;

    this->is_sign = B.is_sign;
}

Form& Form::operator=(const Form& B)
{
    std::cout << name <<" Form copy assignment called" << std::endl;
    this->is_sign = B.is_sign;
    return (*this);
}

void Form::beSigned(Bureaucrat &B)
{
    if(B.getGrade() <= this->grade_sign)
        is_sign = true;
    else
        throw Form::GradeTooLowException();
}
std::string Form::getName(void) const
{
    return (this->name);
}
bool Form::getIs_sign(void) const
{
    return (this->is_sign);
}
int Form::getGrade_sign(void) const
{
    return (this->grade_sign);

}
int Form::getGrade_exec(void) const
{
    return (this->grade_exec);
}

Form::~Form()
{
        std::cout << name <<" Form deconstructor called" << std::endl;
}

const char *Form::GradeTooHighException::what() const throw()
{
    return ("\033[31mERROR:Grade too high\033[0m");
}

const char *Form::GradeTooLowException::what() const throw()
{
    return ("\033[31mERROR:Grade too Low\033[0m");
}

std::ostream &operator << (std::ostream &out, Form const &f)
{
    out << "Form information name : \n"<<f.getName() << " is_signed: " << f.getIs_sign() <<"\ngrade sign : "<< f.getGrade_sign() << "\ngrade exec :"<< f.getGrade_exec() << std::endl;
    return out;
}