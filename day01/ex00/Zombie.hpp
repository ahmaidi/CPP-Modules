/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:19:00 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/11/07 12:19:04 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>

class Zombie{

    private:
        std::string name;
    public:
    Zombie(std::string name);
    ~Zombie(void);
    void announce( void );
};
Zombie* newZombie( std::string name );
void randomChump( std::string name );
#endif