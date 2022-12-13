/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:10:24 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/11/10 15:23:50 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef WEAPON_H
# define WEAPON_H

# include <iostream>

class Weapon 
{
    private:
        std::string type;
    public:
        Weapon(std::string type);
        Weapon();
        ~Weapon( void );
        const std::string& getType(void);
        void setType(std::string type);
};

#endif