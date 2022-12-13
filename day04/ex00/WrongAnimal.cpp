/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 19:09:10 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/11/23 19:09:12 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal Default Constructor Called" << std::endl;
    type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(std::string type):type(type)
{
    std::cout << "WrongAnimal Constructor Called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &A)
{
    std::cout << "WrongAnimal Copy Constructor Called" << std::endl;
    *this = A;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const &A)
{
    std::cout << "WrongAnimal Copy assignment operator called" << std::endl;
    this->type = A.type;
    return (*this);
}
WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destructor Called" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
    return (this->type);
}
void WrongAnimal::makeSound(void) const
{
    std::cout << "An WrongAnimal is making sound" << std::endl;
}