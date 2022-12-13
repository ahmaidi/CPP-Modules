/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 19:08:54 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/11/23 19:08:56 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
Dog::Dog()
{
    std::cout << "Dog Default Constructor Called" << std::endl;
    type = "Dog";
}

Dog::Dog(std::string type):Animal(type)
{
    std::cout << "Dog Constructor Called" << std::endl;
}

Dog::Dog(Dog const &A)
{
    std::cout << "Dog Copy Constructor Called" << std::endl;
    *this = A;
}

Dog& Dog::operator=(Dog const &A)
{
    std::cout << "Dog Copy assignment operator called" << std::endl;
    this->type = A.type;
    return (*this);
}
Dog::~Dog()
{
    std::cout << "Dog Destructor Called" << std::endl;
}

void Dog::makeSound(void) const
{
    std::cout << "A Dog is making sound: brack brack" << std::endl;
}