/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:19:21 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/11/07 14:41:21 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "Constructor is called" << std::endl;
    return ;
}

Zombie::~Zombie(void)
{
    std::cout << this->name << " is destroyed" << std::endl;
    return ;
}

void Zombie::setName(std::string name)
{
    this->name = name;
    return ;
}
std::string Zombie::getName(void)
{
    return name;
}

void Zombie::announce(void)
{
    std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}