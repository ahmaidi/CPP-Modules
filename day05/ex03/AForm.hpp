/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:16:34 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/11/29 16:16:35 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_H
# define AFORM_H

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    private:
        const std::string name;
        bool is_sign;
        int const grade_sign;
        int const grade_exec;
    public:
    AForm();
    AForm(std::string name, int const grade_sign, int const grade_exec);
    AForm(const AForm& B);
    AForm& operator=(const AForm& B);
    virtual ~AForm();
    std::string getName(void) const;
    bool getIs_sign(void) const;
    int getGrade_sign(void) const;
    int getGrade_exec(void) const;
    void beSigned(Bureaucrat const &B);
    virtual void execute(Bureaucrat const & executor) const = 0;
    class GradeTooHighException: public std::exception
    {
        public:
        virtual const char* what() const throw();
    };
    class GradeTooLowException: public std::exception
    {
        public:
        virtual const char* what() const throw();
    };
    class NoSigned: public std::exception
    {
        public:
        virtual const char* what() const throw();
    };
    
    
};
std::ostream &operator << (std::ostream &out, AForm const &a);

# endif