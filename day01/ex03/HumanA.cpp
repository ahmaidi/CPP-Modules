/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:10:09 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/11/09 18:25:45 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &W1):name(name),W1(W1)
{
    std::cout << "HumanA Constructor is called" << std::endl;
    return ;
}

HumanA::~HumanA( void )
{
    std::cout <<"HumanA Destructor is  called" << std::endl;
    return ;
}
void HumanA::attack(void)
{
    std::cout << name << " attacks with their " << W1.getType() << std::endl;
    return ;
}