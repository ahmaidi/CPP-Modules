/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 18:36:14 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/12/03 18:42:01 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Base.hpp"

Base::Base()
{
    std::cout <<"Base default constructor called"<< std::endl;
}

Base::~Base()
{
    std::cout <<"Base destructor called"<< std::endl;
}

A::A()
{
    std::cout <<"A default constructor called"<< std::endl;  
}

A::~A()
{
    std::cout <<"A destructor called"<< std::endl;
}

B::B()
{
    std::cout <<"B default constructor called"<< std::endl;  
}

B::~B()
{
    std::cout <<"B destructor called"<< std::endl;
}

C::C()
{
    std::cout <<"C default constructor called"<< std::endl;  
}

C::~C()
{
    std::cout <<"C destructor called"<< std::endl;
}