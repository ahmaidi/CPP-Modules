/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:10:22 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/11/09 18:27:15 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    std::cout << "Weapon Constructor is called" << std::endl;
    this->type = type;
    return ;
}

Weapon::Weapon( void )
{
    std::cout <<" Weapon default constructor is called" << std::endl;
    this->type = "default"; 
    return ;
}
Weapon::~Weapon( void )
{
    std::cout <<"Weapon Destructor is  called" << std::endl;
    return ;
}

const std::string& Weapon::getType(void)
{
    return type;
}

void Weapon::setType(std::string type)
{
    this->type = type;
}