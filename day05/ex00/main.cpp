/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:12:17 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/11/30 18:28:39 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"

int main(void)
{
    Bureaucrat a;
    std::cout << a << std::endl;
    try
    {
        Bureaucrat B("boss", 150);
        B.Decrement_grade();
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "============================================== " << std::endl;
    {
        try
        {
            Bureaucrat b("bob", 1);
            std::cout << b << std::endl;
            b.Increment_grade();
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    return 0;
}