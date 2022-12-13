/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:19:00 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/11/07 14:40:30 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>

class Zombie{

    private:
        std::string name;
    public:
    Zombie();
    ~Zombie(void);
    void setName(std::string name);
    std::string getName(void);
    void announce( void );
};

Zombie* zombieHorde( int N, std::string name );

#endif