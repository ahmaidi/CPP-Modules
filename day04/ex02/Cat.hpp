/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 19:11:32 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/11/24 16:11:39 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat:public AAnimal
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