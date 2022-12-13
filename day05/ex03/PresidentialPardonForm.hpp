/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:17:04 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/11/29 16:17:05 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H
#include "AForm.hpp"
#include <string>

class PresidentialPardonForm:public AForm
{
    private:
        std::string target;
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(PresidentialPardonForm const &P);
        PresidentialPardonForm& operator=(PresidentialPardonForm const &P);
        ~PresidentialPardonForm(void);
        void execute(Bureaucrat const &executor) const;

};
#endif