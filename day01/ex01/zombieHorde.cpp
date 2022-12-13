/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:51:16 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/11/10 15:19:51 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    int i;
    
    i = 0;
    if (!N)
        exit(0);
    Zombie *tab_Zombie = new Zombie[N];

    while(i < N)
    {
        tab_Zombie[i].setName(name);
        i++;
    }
    return (tab_Zombie);
    
}