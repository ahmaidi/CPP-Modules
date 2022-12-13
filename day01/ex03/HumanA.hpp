/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:10:03 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/11/09 18:12:44 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"

class HumanA
{
    public:
        std::string name;
        Weapon &W1;
    public:
        HumanA();
        HumanA(std::string name, Weapon &W1);
        ~HumanA(void);
        void attack();
};