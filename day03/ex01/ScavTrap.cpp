/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 18:21:39 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/11/19 18:47:47 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout<< "Default constructor called" << std::endl;
    name = "WhoamI";
    Hit_point = 100;
    Energy_point = 50;
    Attack_damage = 20;
    return ;    
}

ScavTrap::ScavTrap(std::string name):ClapTrap(name)
{
    this->name = name;
    this->Hit_point = 100;
    this->Energy_point = 50;
    this->Attack_damage = 20;
    std::cout<< name << " ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &d)
{
    std::cout<< "Copy constructor called" << std::endl;
    *this = d;
    return ;
}
ScavTrap& ScavTrap::operator=(const ScavTrap &D )
{
    std::cout<< "Copy assignment operator called" << std::endl;
    name = D.name;
    Hit_point = D.Hit_point;
    Energy_point = D.Energy_point;
    Attack_damage = D.Attack_damage;
    return (*this);
}

void ScavTrap::attack(const std::string& target)
{
    if(Hit_point && Energy_point)
    {
        std::cout << "ScavTrap " << name <<" attacks " << target <<  " causing "<< Attack_damage << " points of damage! " << std::endl;
        this->Energy_point -= 1;
    }
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}
ScavTrap::~ScavTrap()
{
    std::cout << this->name << " ScavTrap Destructor called" << std::endl;
    return ;
}