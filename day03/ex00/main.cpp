/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 19:16:30 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/11/18 18:15:46 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

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
}