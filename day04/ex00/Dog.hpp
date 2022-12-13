/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 19:08:58 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/11/23 19:09:00 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef DOG_H
# define DOG_H
#include "Animal.hpp"

class Dog:public Animal
{
    public:
    Dog();
    Dog(std::string type);
    Dog(Dog const &A);
    Dog& operator=(Dog const &A);
    ~Dog();
    void makeSound(void) const;
};
# endif