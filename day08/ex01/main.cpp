/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 02:11:53 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/12/12 19:30:29 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp"
# include <array>
int main()
{
    Span s(10);
    try
    {
        Span sp = Span(5);
        sp.addNumber(INT_MIN);
        sp.addNumber(INT_MAX);
        //sp.addNumber(17);
        Span sp1 = Span(15);
        sp.addNumbers(sp1);
        std::cout << "Shortest Span "<< sp.shortestSpan() << '\n';
        std::cout << "Longest Span " << sp.longestSpan() << '\n';\
        
    
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;
}