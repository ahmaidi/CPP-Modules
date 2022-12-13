/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:19:21 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/11/07 12:39:34 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    std::cout << "Constructor is called" << std::endl;
    this->name = name;
    return ;
}

Zombie::~Zombie(void)
{
    std::cout << this->name << " is  destroyed" << std::endl;
    return ;
}

void Zombie::announce(void)
{
    std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}