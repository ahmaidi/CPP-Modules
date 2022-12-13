/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 19:11:17 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/11/24 16:09:23 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AAnimal_H
# define AAnimal_H
# include <iostream>

class AAnimal
{
    protected:
        std::string type;
    public:
        AAnimal();
        AAnimal(std::string type);
        AAnimal(AAnimal const &A);
        AAnimal& operator=(AAnimal const &A);
        virtual ~AAnimal();
        std::string getType(void) const;
        virtual void makeSound(void) const = 0;
};

#endif