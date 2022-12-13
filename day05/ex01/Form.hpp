/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:12:59 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/11/29 16:13:00 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H
#include <iostream>
class Bureaucrat;
class Form
{
    private:
        const std::string name;
        bool is_sign;
        int const grade_sign;
        int const grade_exec;
    public:
    Form();
    Form(std::string name, int const grade_sign, int const grade_exec);
    Form(const Form& B);
    Form& operator=(const Form& B);
    ~Form();
    std::string getName(void) const;
    bool getIs_sign(void) const;
    int getGrade_sign(void) const;
    int getGrade_exec(void) const;
    void beSigned(Bureaucrat &B);
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
    
};
std::ostream &operator << (std::ostream &out, Form const &a);

# endif