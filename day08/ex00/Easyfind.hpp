/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 23:39:30 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/12/12 19:29:09 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
# define EASYFIND_H

#include <algorithm>
#include <iostream>

class WrongIndex: public std::exception
{
    public:
    virtual const char* what() const throw()
    {
        return ("This value doesn't exit ");
    }
};
template <typename T>
typename T::iterator easyfind(T &arr, int find)
{
    typename T::iterator it;

    it = std::find(arr.begin(), arr.end(), find);
    if (it == arr.end())
        throw WrongIndex();
    else
        return (it);
}
#endif