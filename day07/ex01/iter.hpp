/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 23:52:29 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/12/06 23:52:32 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ITER_H
# define ITER_H
# include <iostream>

template <typename T>
void iter(T *arr , size_t N, void (*p)(T const&))
{
    size_t i;
    for(i = 0 ; i < N; i++)
    {
        p(arr[i]);
    }
}

template <typename T>
void print(T a)
{
    std::cout << a << std::endl;
}
# endif