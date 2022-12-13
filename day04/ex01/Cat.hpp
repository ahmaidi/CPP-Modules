/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 19:10:11 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/11/23 19:10:12 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H
#include "Animal.hpp"
#include "Brain.hpp"

class Cat:public Animal
{
    private:
        Brain *b;
    public:
    Cat();
    Cat(std::string type);
    Cat(Cat const &A);
    Cat& operator=(Cat const &A);
    ~Cat();
    void makeSound(void) const;
};
#endif