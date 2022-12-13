/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 19:42:57 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/11/19 18:48:29 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ClapTrap a("ahmed");
    ClapTrap b("ommar");

    a.attack(b.getName());
    b.takeDamage(a.getAttak());
    b.beRepaired(1);
    a.setAttak(12);
    a.attack(b.getName());
    b.takeDamage(a.getAttak());
    /*---------ex01---------*/
    ScavTrap c("hello");
    c.attack("world");
    c.guardGate();
}