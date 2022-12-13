/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 19:10:20 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/11/24 20:15:21 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef DOG_H
# define DOG_H
#include "Animal.hpp"
#include "Brain.hpp"

class Dog:public Animal
{
    private:
        Brain *b;
    public:
    Dog();
    Dog(std::string type);
    Dog(Dog const &A);
    Dog& operator=(Dog const &A);
    ~Dog();
    void print(void) const;
    void makeSound(void) const;
};
# endif