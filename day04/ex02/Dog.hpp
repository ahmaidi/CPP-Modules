/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 19:11:42 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/11/24 16:11:36 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef DOG_H
# define DOG_H
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog:public AAnimal
{
    private:
        Brain *b;
    public:
    Dog();
    Dog(std::string type);
    Dog(Dog const &A);
    Dog& operator=(Dog const &A);
    ~Dog();
    void makeSound(void) const;
};
# endif