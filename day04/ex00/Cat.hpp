/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 19:08:49 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/11/23 19:08:51 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H
#include "Animal.hpp"

class Cat:public Animal
{
    public:
    Cat();
    Cat(std::string type);
    Cat(Cat const &A);
    Cat& operator=(Cat const &A);
    ~Cat();
    void makeSound(void) const;
};
#endif