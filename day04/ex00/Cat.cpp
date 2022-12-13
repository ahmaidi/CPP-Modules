/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 19:08:45 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/11/23 19:08:47 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"
Cat::Cat()
{
    std::cout << "Cat Default Constructor Called" << std::endl;
    type = "Cat";
}

Cat::Cat(std::string type):Animal(type)
{
    std::cout << "Cat Constructor Called" << std::endl;
}

Cat::Cat(Cat const &A)
{
    std::cout << "Cat Copy Constructor Called" << std::endl;
    *this = A;
}

Cat& Cat::operator=(Cat const &A)
{
    std::cout << "Cat Copy assignment operator called" << std::endl;
    this->type = A.type;
    return (*this);
}
Cat::~Cat()
{
    std::cout << "Cat Destructor Called" << std::endl;
}

void Cat::makeSound(void) const
{
    std::cout << "A Cat is making sound: meew meew" << std::endl;
}