/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 23:39:52 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/12/13 17:28:53 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
# define SPAN_H
# include <iostream>
# include <vector>
# include<algorithm>
class Span{
    private:
        std::vector<int> vec;
        unsigned int N;
    public:
        Span();
        Span(unsigned int N);
        Span(Span const &obj);
        Span& operator=(Span const &obj);
        void addNumber(int nbr);
        void addNumbers(Span sp);
        unsigned int shortestSpan(void) const ;
        unsigned int longestSpan(void) const ;
        std::vector<int>::const_iterator begin() const;
        std::vector<int>::const_iterator end() const;

        class Full: public std::exception
        {
            public:
            virtual const char* what() const throw();
        };
        class NoSpan: public std::exception
        {
            public:
            virtual const char* what() const throw();
        };
        ~Span();
};
#endif