/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 19:09:59 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/11/24 20:21:06 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Default Constructor Called" << std::endl;
    for (int i = 0; i < 100; i++)
    {
        ideas[i] = "idea";
    }
}

Brain::Brain(std::string type)
{
    int i;
    for (i = 0; i < 100; i++)
    {
        ideas[i] = type;
    }
    std::cout << "Brain Constructor Called" << std::endl;
}

Brain::Brain(Brain const &A)
{
    std::cout << "Brain Copy Constructor Called" << std::endl;
    *this = A;
}

Brain& Brain::operator=(Brain const &A)
{
    std::cout << "Brain Copy assignment operator called" << std::endl;
    int i;
    for (i = 0; i < 100; i++)
    {
        this->ideas[i] = A.ideas[i];
    }
    return (*this);
}

void Brain::print()
{
    for(int i = 0; i < 10; i++)
    {
        std::cout << &ideas[i]<< std::endl;
    }
}
Brain::~Brain()
{
    std::cout << "Brain Destructor Called" << std::endl;
}
