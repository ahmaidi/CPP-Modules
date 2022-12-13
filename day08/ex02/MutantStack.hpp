/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 23:20:43 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/12/12 19:32:26 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H
#include <stack>
#include <vector>
#include <algorithm>
# include <iostream>

template <typename T>
class MutantStack: public std::stack<T>{
    public:
        MutantStack() : std::stack<int>() {}
        MutantStack(MutantStack const &S): std::stack<int>(S) {}
        MutantStack& operator =(MutantStack const &S)
        {
            this->c = S.c;
            return (*this);
        }
        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin(void)
        {
            return (this->c.begin());
        }
		iterator end(void)
        {   
            return (this->c.end());
        }
        ~MutantStack(){};
};
#endif