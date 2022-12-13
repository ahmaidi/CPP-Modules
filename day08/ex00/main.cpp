/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 23:39:37 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/12/12 19:29:58 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Easyfind.hpp"
#include <array>
#include <vector>
#include <exception>

 int main()
 {    
    std::array<int, 5> array = {1,2,3,4,5};
    try
    {
        std::cout << *easyfind(array, 2) << std::endl;
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    
	// std::vector<int> vec;

	// vec.push_back(10);
	// vec.push_back(20);
	// vec.push_back(90);
	// vec.push_back(1);

	// try
	// {
	// 	std::cout << *easyfind(vec, 10) << std::endl;
	// }
	// catch (std::exception& e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	return (0);
}
