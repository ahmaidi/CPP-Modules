/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:10:06 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/11/09 23:09:04 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"

class HumanB
{
    public:
        Weapon* W;
        std::string name;
    public:
        HumanB(std::string name);
        ~HumanB(void);
        void setWeapon(Weapon& );
        void attack();    
};