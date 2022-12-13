/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 19:09:20 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/11/23 19:09:23 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat Default Constructor Called" << std::endl;
    type = "WrongCat";
}

WrongCat::WrongCat(std::string type):WrongAnimal(type)
{
    std::cout << "WrongCat Constructor Called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &A)
{
    std::cout << "WrongCat Copy Constructor Called" << std::endl;
    *this = A;
}

WrongCat& WrongCat::operator=(WrongCat const &A)
{
    std::cout << "WrongCat Copy assignment operator called" << std::endl;
    this->type = A.type;
    return (*this);
}
WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destructor Called" << std::endl;
}

std::string WrongCat::getType(void) const
{
    return (this->type);
}
void WrongCat::makeSound(void) const
{
    std::cout << "An WrongCat is making sound" << std::endl;
}