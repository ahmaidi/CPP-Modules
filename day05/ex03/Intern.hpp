/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:16:48 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/11/29 16:16:50 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
# define INTERN_H
# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class AForm;

class Intern
{
    public:
        Intern(void);
		Intern(Intern const &I);
		Intern &operator=(Intern const &I);
		~Intern(void);
        AForm   *makeForm(std::string const name_Form, std::string const target) const;
        AForm   *makeShrubberyCreationForm(std::string const target) const;
	    AForm   *makeRobotomyRequestForm(std::string const target) const;
	    AForm   *makePresidentialPardonForm(std::string const target) const;
	class FormNotExitException: public std::exception
    	{
       		public:
        	virtual const char* what() const throw();
    	};
};
#endif
