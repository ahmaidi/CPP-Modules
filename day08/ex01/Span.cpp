/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 23:39:55 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/12/13 17:28:39 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
    this->N = 0;
}

Span::Span(unsigned int N):N(N)
{

}

Span::Span(Span const &obj)
{
    *this = obj;
}

Span &Span::operator=(Span const &obj)
{
    this->N = obj.N;
    this->vec.clear();
    this->vec.assign(obj.vec.begin(), obj.vec.end());
    return (*this);
}

void Span::addNumber(int nbr)
{
    if (this->vec.size() < this->N)
    {
        (this->vec).push_back(nbr);
    }
    else
    {
        throw(Span::Full());
    }
}

void Span::addNumbers(Span sp)
{
    std::vector<int>::const_iterator begin;
    std::vector<int>::const_iterator end;
    unsigned int i = 0;
    unsigned int current_size = this->vec.size();

    begin = sp.begin();
    end = sp.end();
    if (begin == end)
        return ;
    for(i = 0; i < this->N - current_size; i++)
    {
        this->vec.push_back(*begin++);
        if (begin == end)
            break;
    }
    if (i == this->N - current_size)
        throw(Span::Full());
}

std::vector<int>::const_iterator Span::begin() const
{
    return this->vec.begin();
}

std::vector<int>::const_iterator Span::end() const
{
    return this->vec.end();
}

unsigned int Span::shortestSpan(void) const 
{
    std::vector<int> tmp;
    unsigned int n;
    if ((this->vec).size() < 2)
        throw(Span::NoSpan());
    tmp.assign((this->vec).begin(), (this->vec).end());
    sort(tmp.begin(), tmp.end());
    n = (unsigned int )(tmp[1] - tmp[0]);
    for (unsigned int i = 1; i < tmp.size() - 1 ; i++) {
        if ( n > (unsigned int )(tmp[i + 1] - tmp[i]))
            n = (unsigned int )(tmp[i + 1] - tmp[i]);
    }
    return n;
}

unsigned int Span::longestSpan(void) const
{
    std::vector<int> tmp;
    unsigned int n;
    if ((this->vec).size() < 2)
        throw(Span::NoSpan());
    tmp.assign((this->vec).begin(), (this->vec).end());
    sort(tmp.begin(), tmp.end());
    n = tmp[tmp.size() - 1] - tmp[0];
    return n;
}

const char* Span::Full::what() const throw()
{
    return ("This span is Full");
}

const char* Span::NoSpan::what() const throw()
{
    return ("This vector empty Or Content one number");
}

Span::~Span()
{
    
}
