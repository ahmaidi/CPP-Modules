/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 18:21:57 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/11/19 18:44:42 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H
#include "ClapTrap.hpp"

class ScavTrap :protected ClapTrap 
{
    public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(ScavTrap const &d);
    ScavTrap& operator=(const ScavTrap &D );
    ~ScavTrap();
    void attack(const std::string& target);
    void guardGate();
};
#endif