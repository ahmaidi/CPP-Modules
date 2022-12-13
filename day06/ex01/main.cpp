/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 15:50:19 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/12/04 18:03:03 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
struct Data
{
    char c;
    int a;
    double b;
    int d;   
    //Data():a(0),b(1)
    //{
    //    
    //}
};

//uintptr_t serialize(Data* ptr)
//{
//    return(static_cast <uintptr_t>(ptr));
//}
//
//Data* deserialize(uintptr_t raw)
//{
//    return(reinterpret_cast <Data *>(raw));
//}
int main()
{
    Data d;
    d.c = '1';
    d.a = 2;
    d.b = 3.1;
    d.d = 4;
    std::cout<<sizeof(d)<<std::endl;
    char *a = reinterpret_cast<char*>(&d);
    std::cout<<*a<<std::endl;
    a++;
    std::cout<<*a<<std::endl;
    a++;
    double *g = reinterpret_cast<double *>(a);
    std::cout<<*g<<std::endl;
    a++;
    a++;
    std::cout<<*a;
    //std::cout << d->a << std::endl;
    //std::cout << d->b << std::endl;
//
    //uintptr_t ptr = serialize(d);
    //std::cout <<"======================"<< std::endl;
    //std::cout << (unsigned long)d<<std::endl;
    //std::cout << ptr << std::endl;
//
    //std::cout <<"======================"<< std::endl;
    //Data *dt = deserialize(ptr);
    //std::cout << dt->b << std::endl;
    
    
}

