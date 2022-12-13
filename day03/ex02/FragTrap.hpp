/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 18:21:57 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/11/19 18:44:16 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap :protected ClapTrap 
{
    public:
    FragTrap();
    FragTrap(std::string name);
    FragTrap(FragTrap const &d);
    FragTrap& operator=(const FragTrap &D );
    ~FragTrap();
    void highFivesGuys(void);
};
#endif