/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:12:47 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/11/29 16:12:49 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
# include "Form.hpp"

Bureaucrat::Bureaucrat():name("anyone")
 {
    std::cout << name <<" Bureaucrat default constructor called" << std::endl;
    _grade = 10;
 }
Bureaucrat::Bureaucrat(std::string name, int grade):name(name)
{
    if (grade < 1)
        throw  Bureaucrat::GradeTooHighException();
    else if (grade > 150)
            throw Bureaucrat::GradeTooLowException();
    else
    {
        std::cout << name<<" Bureaucrat constructor called" << std::endl;
        this->_grade = grade;
    }
}

Bureaucrat::Bureaucrat(const Bureaucrat& B)
{
    std::cout << "Bureaucrat copy constructor called" << std::endl;
    *this = B;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& B)
{
   std::cout << "Bureaucrat Copy assignment operator called" << std::endl;
   this->_grade = B._grade;
   return (*this);
}

std::string Bureaucrat::getName(void) const
{
    return (this->name);
}

int Bureaucrat::getGrade(void) const
{
    return (this->_grade);
}

void Bureaucrat::Increment_grade(void)
{
    if (this->_grade == 1)
        throw Bureaucrat::GradeTooHighException();
    else
        this->_grade--;
}

void Bureaucrat::Decrement_grade(void)
{
    if (this->_grade == 150)
        throw Bureaucrat::GradeTooLowException();
    else
        this->_grade++;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("\033[31mERROR: Grade must be >= 1\033[0m");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("\033[31mERROR: Grade must be <= 150\033[0m");
}
void Bureaucrat::signForm(Form &f)
{
    if (this->_grade > f.getGrade_sign())
        std::cout << name << " couldn't sign " << f.getName() << "because his grade's Low" <<  std::endl;
    else if(f.getIs_sign())
        std::cout << name << " couldn't sign " << f.getName() << "because it's already signed" <<  std::endl;
    else
    {
        f.beSigned(*this);
        std::cout << name << " signs " << f.getName() <<  std::endl;
    }
}
Bureaucrat::~Bureaucrat()
{
    std::cout << name <<" Bureaucrat deconstructor called" << std::endl;
}

std::ostream &operator << (std::ostream &out, Bureaucrat const &a)
{
    out << a.getName() << ", bureaucrat grade " << a.getGrade() << std::endl;
    return out;
}