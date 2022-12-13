/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:18:25 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/11/09 23:27:27 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int main()
{
    randomChump("Boo");
    Zombie *foo = newZombie("FOO");
    foo->announce();
    delete (foo);
    return (0);
}