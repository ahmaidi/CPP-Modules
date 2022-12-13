/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 18:32:10 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/12/03 18:36:10 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_H
# define BASE_H

#include<iostream>
class Base
{
    public:
        Base();
        virtual ~Base();
};

class A:public Base
{
    public:
        A();
        virtual ~A();
};

class B:public Base
{
    public:
        B();
        virtual ~B();
};

class C:public Base
{
    public:
        C();
        virtual ~C();
};

#endif