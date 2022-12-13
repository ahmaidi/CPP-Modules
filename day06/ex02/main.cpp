/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 18:40:26 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/12/04 18:07:21 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base * generate(void)
{
    srand(time(0));
    int rd = rand() % 3;
    if (rd == 0)
        return(new A());
    else if (rd == 1)
        return(new B());
    else
        return(new C());
}

void identify(Base* p)
{
    if(dynamic_cast<A*>(p))
        std::cout <<"It is a pointer de A"<< std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout <<"It is a pointer de B"<< std::endl;
    else
        std::cout <<"It is a pointer de C"<< std::endl;
}

void identify(Base& p)
{
    try
    {
        (void)dynamic_cast<A&>(p);
        std::cout <<"It is a reference de A"<< std::endl;
    }
    catch(const std::exception& e)
    {
    }
    try
    {
        (void)dynamic_cast<B&>(p);
        std::cout <<"It is a reference de B"<< std::endl;
    }
    catch(const std::exception& e)
    {
    }
    try
    {
        (void)dynamic_cast<C&>(p);
        std::cout <<"It is a reference de C"<< std::endl;
    }
    catch(const std::exception& e)
    {
    }
}

int main()
{
    //Base *a = generate();
    //Base &r = *a;
    //identify(r);
    return (0);
}