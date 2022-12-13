/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 19:11:47 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/11/26 22:56:10 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AAnimal.hpp"
# include "Dog.hpp"
# include "Cat.hpp"
# include "Brain.hpp"


int main( void )
{
    std::cout << "===========ex02===========" << std::endl;
    AAnimal * dog = new Dog();
    AAnimal * cat = new Cat();
    cat -> makeSound();
    dog -> makeSound();
    delete dog;
    delete cat;
    //AAnimal * animal = new AAnimal();

    return 0;
}