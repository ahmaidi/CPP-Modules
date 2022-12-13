/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:16:41 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/11/29 16:16:43 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include <iostream>


class AForm;
class Bureaucrat{
    private:
        const std::string name;
        int _grade;
    public:
    Bureaucrat();
    Bureaucrat(std::string name, int grade);
    Bureaucrat(const Bureaucrat& B);
    Bureaucrat& operator=(const Bureaucrat& B);
    ~Bureaucrat();
    std::string getName(void) const;
    void signForm(AForm &F) const;
    void executeForm(AForm const & form)const;
    int getGrade(void) const;
    void Increment_grade(void);
    void Decrement_grade(void);
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

std::ostream &operator << (std::ostream &out, Bureaucrat const &a);

#endif