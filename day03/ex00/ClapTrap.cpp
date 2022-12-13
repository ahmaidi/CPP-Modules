/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 19:09:46 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/11/20 18:19:14 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout<< "Default constructor called" << std::endl;
    name = "WhoamI";
    Hit_point = 10;
    Energy_point = 10;
    Attack_damage = 0;
    return ;    
}

ClapTrap::ClapTrap(std::string name)
{
    this->name = name;
    this->Hit_point = 10;
    this->Energy_point = 10;
    this->Attack_damage = 0;
    std::cout<< name << " constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &d)
{
    std::cout<< "Copy constructor called" << std::endl;
    *this = d;
    return ;
}
ClapTrap& ClapTrap::operator=(const ClapTrap &D )
{
    std::cout<< "Copy assignment operator called" << std::endl;
    name = D.name;
    Hit_point = D.Hit_point;
    Energy_point = D.Energy_point;
    Attack_damage = D.Attack_damage;
    return (*this);
}

unsigned int ClapTrap::getAttak()const
{
    return this->Attack_damage;
}

void ClapTrap::setAttak(unsigned int attack)
{
    this->Attack_damage = attack;
}

std::string ClapTrap::getName()const
{
    return this->name;
}
void ClapTrap::attack(const std::string& target)
{
    if(Hit_point && Energy_point)
    {
        std::cout << "ClapTrap " << name <<" attacks " << target <<  " causing "<< Attack_damage << " points of damage! " << std::endl;
        this->Energy_point -= 1;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(Hit_point >= amount)
    {
        Attack_damage +=amount;
        std::cout << "ClapTrap " << name <<" take a "<< Attack_damage <<" points of damage! " << std::endl;
        Hit_point -= amount;
    }
    else
        std::cout <<"the amount " << amount <<" is greater then Hit point " << Hit_point << " of " << name<< std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(Hit_point && Energy_point)
    {
        std::cout << "ClapTrap " << name <<" Repaired his self by "<< amount << std::endl;
        Hit_point += amount;
        this->Energy_point -= 1;
    }
}
ClapTrap::~ClapTrap()
{
    std::cout << this->name << " Destructor called" << std::endl;
    return ;
}