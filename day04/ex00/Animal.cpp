/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 19:08:34 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/11/23 19:08:37 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal Default Constructor Called" << std::endl;
    type = "Animal";
}

Animal::Animal(std::string type):type(type)
{
    std::cout << "Animal Constructor Called" << std::endl;
}

Animal::Animal(Animal const &A)
{
    std::cout << "Animal Copy Constructor Called" << std::endl;
    *this = A;
}

Animal& Animal::operator=(Animal const &A)
{
    std::cout << "Animal Copy assignment operator called" << std::endl;
    this->type = A.type;
    return (*this);
}
Animal::~Animal()
{
    std::cout << "Animal Destructor Called" << std::endl;
}

std::string Animal::getType(void) const
{
    return (this->type);
}
void Animal::makeSound(void) const
{
    std::cout << "An animal is making sound" << std::endl;
}