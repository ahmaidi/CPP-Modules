/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 16:01:59 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/11/02 16:35:55 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

int main(int ac, char **av)
{
    int i;
    int j;

    i = 1;
    j = 0;
    if (ac > 1)
    {
        while(av[i])
        {
            j = 0;
            while(av[i][j])
            {
                if (av[i][j] >= 'a' && av[i][j] <= 'z')
                    av[i][j] += 'A' - 'a';
                j++;
            }
            i++;
        }
        i = 1;
        while(av[i])
        {
            std::cout << av[i];
            i++;
        }
        std::cout << "\n";

    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE * \n";
    return (0);
}