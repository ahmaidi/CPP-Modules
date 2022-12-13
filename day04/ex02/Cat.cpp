/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 19:11:28 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/11/24 16:11:41 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
Cat::Cat()
{
    std::cout << "Cat Default Constructor Called" << std::endl;
    type = "Cat";
    this->b = new Brain();
}

Cat::Cat(std::string type):AAnimal(type)
{
    this->b = new Brain();
    std::cout << "Cat Constructor Called" << std::endl;
}

Cat::Cat(Cat const &A)
{
    std::cout << "Cat Copy Constructor Called" << std::endl;
    this->b = NULL;
    *this = A;
}

Cat& Cat::operator=(Cat const &A)
{
    std::cout << "Cat Copy assignment operator called" << std::endl;
    if (this->b)
        delete this->b;
    this->b = new Brain();
    this->type = A.type;
    *(this->b) = *(A.b);
    return (*this);
}
Cat::~Cat()
{
    delete this->b;
    std::cout << "Cat Destructor Called" << std::endl;
}

void Cat::makeSound(void) const
{
    std::cout << "A Cat is making sound: meew meew" << std::endl;
}