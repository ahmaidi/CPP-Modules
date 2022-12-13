/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:17:23 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/11/29 16:17:25 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H
#include "AForm.hpp"
#include <string>
#include <fstream>

class ShrubberyCreationForm:public AForm
{
    private:
    std::string target;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(ShrubberyCreationForm const &P);
        ShrubberyCreationForm& operator=(ShrubberyCreationForm const &P);
        ~ShrubberyCreationForm(void);
        void execute(Bureaucrat const &executor) const;

};
#endif