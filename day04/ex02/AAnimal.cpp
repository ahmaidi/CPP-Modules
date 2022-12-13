/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 19:11:12 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/11/23 19:11:14 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AAnimal.hpp"

AAnimal::AAnimal()
{
    std::cout << "AAnimal Default Constructor Called" << std::endl;
    type = "AAnimal";
}

AAnimal::AAnimal(std::string type):type(type)
{
    std::cout << "AAnimal Constructor Called" << std::endl;
}

AAnimal::AAnimal(AAnimal const &A)
{
    std::cout << "AAnimal Copy Constructor Called" << std::endl;
    *this = A;
}

AAnimal& AAnimal::operator=(AAnimal const &A)
{
    std::cout << "AAnimal Copy assignment operator called" << std::endl;
    this->type = A.type;
    return (*this);
}
AAnimal::~AAnimal()
{
    std::cout << "AAnimal Destructor Called" << std::endl;
}

std::string AAnimal::getType(void) const
{
    return (this->type);
}
