/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 19:09:44 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/11/18 19:30:50 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include<iostream>
class ClapTrap
{
protected:
    std::string name;
    unsigned int Hit_point;
    unsigned int Energy_point;
    unsigned int Attack_damage;
    
public:
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(ClapTrap const &d);
    ClapTrap& operator=(const ClapTrap &D );
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    std::string getName()const;
    unsigned int getAttak()const;
    void setAttak(unsigned int attack);
    ~ClapTrap();
};

#endif