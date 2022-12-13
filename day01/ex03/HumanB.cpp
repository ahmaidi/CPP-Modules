/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:10:00 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/11/09 23:09:16 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanB.hpp"

HumanB::HumanB(std::string name):W(NULL),name(name)
{
    std::cout << "HumanB Constructor is called" << std::endl;
    return ;
}
HumanB::~HumanB(void)
{
    std::cout << "HumanB Deconstructor is called" << std::endl;
    return ;
    
}
void HumanB::setWeapon(Weapon &w1)
{
    this->W = &w1;
}
void HumanB::attack(void)
{
    if (this->W == NULL)
        return ;
    std::cout << name << " attacks with their " << W->getType() << std::endl;
    return ;
}