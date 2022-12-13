/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 19:10:24 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/11/26 22:54:55 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"
# include "Dog.hpp"
# include "Cat.hpp"
# include "Brain.hpp"


int main()
{
    // Animal *A[6] = {new Dog(), new Dog(), new Dog(), new Cat(), new Cat(), new Cat()};
    // for (int i = 0; i < 6 ; i++)
    //     delete A[i];
    Dog basic;
    std::cout << "BASIC" << std::endl;
    basic.print();
    std::cout << "==========================" << std::endl;
    {
        Dog tmp = basic;
        std::cout << "TMP" << std::endl;
        tmp.print();
        std::cout << "==========================" << std::endl; 
    }
    return 0;
}