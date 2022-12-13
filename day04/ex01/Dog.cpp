/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 19:10:17 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/11/24 20:22:36 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
Dog::Dog()
{
    std::cout << "Dog Default Constructor Called" << std::endl;
    type = "Dog";
    this->b = new Brain();
}

Dog::Dog(std::string type):Animal(type)
{
    this->b = new Brain();
    std::cout << "Dog Constructor Called" << std::endl;
}

Dog::Dog(Dog const &A)
{
    std::cout << "Dog Copy Constructor Called" << std::endl;
    this->b = NULL;
    *this = A;
}

Dog& Dog::operator=(Dog const &A)
{
    std::cout << "Dog Copy assignment operator called" << std::endl;
    if (this->b)
        delete this->b;
    this->b = new Brain();
    this->type = A.type;
    *(this->b) = *(A.b);
    return (*this);
}
Dog::~Dog()
{
    delete this->b;
    std::cout << "Dog Destructor Called" << std::endl;
}
void Dog::print(void) const
{
    this->b->print();
}
void Dog::makeSound(void) const
{
    std::cout << "A Dog is making sound: brack brack" << std::endl;
}