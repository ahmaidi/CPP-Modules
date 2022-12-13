/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 23:52:25 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/12/06 23:52:27 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_H
# define WHATEVER_H
#include <iostream>

template <typename T>
void swap(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}
template <typename T>
T max(T &a, T &b)
{
    if (a > b)
        return a;
    else
        return b;
}
template <typename T>
T min(T &a, T &b)
{
    if (a < b)
        return a;
    else
        return b;
}
#endif