/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 00:37:56 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/11/10 01:41:35 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **ar)
{
    if (ac == 2)
    {
        Harl harl;
        harl.complain(ar[1]);
    }
    else
    {
        std::cout <<"Wrong arguments" << std::endl;    
    }
    return (0);
}