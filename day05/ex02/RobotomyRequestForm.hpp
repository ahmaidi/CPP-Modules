/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:14:53 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/11/29 16:14:54 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H
#include "AForm.hpp"
#include <string>
#include <time.h>

class RobotomyRequestForm:public AForm
{
    private:
    std::string target;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(RobotomyRequestForm const &P);
        RobotomyRequestForm& operator=(RobotomyRequestForm const &P);
        ~RobotomyRequestForm(void);
        void execute(Bureaucrat const &executor) const;

};
#endif