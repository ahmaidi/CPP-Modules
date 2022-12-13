/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 18:21:39 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/11/19 18:21:30 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout<< "Default constructor called" << std::endl;
    name = "WhoamI";
    Hit_point = 100;
    Energy_point = 100;
    Attack_damage = 30;
    return ;    
}

FragTrap::FragTrap(std::string name):ClapTrap(name)
{
    this->name = name;
    this->Hit_point = 100;
    this->Energy_point = 100;
    this->Attack_damage = 30;
    std::cout<< name << " FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &d)
{
    std::cout<< "Copy constructor called" << std::endl;
    *this = d;
    return ;
}
FragTrap& FragTrap::operator=(const FragTrap &D )
{
    std::cout<< "Copy assignment operator called" << std::endl;
    name = D.name;
    Hit_point = D.Hit_point;
    Energy_point = D.Energy_point;
    Attack_damage = D.Attack_damage;
    return (*this);
}

void FragTrap::highFivesGuys(void)
{
    std::cout<<"positive high five"<<std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << this->name << " FragTrap Destructor called" << std::endl;
    return ;
}