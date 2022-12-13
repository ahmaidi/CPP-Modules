/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 23:10:59 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/12/07 19:23:48 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H

#include <iostream>
template<typename T>
class Array {
    private:
        T   *arr;
        unsigned int n;
    public:
    Array(){
        this->arr = new T[0];
        this->n = 0;
    }
    Array(unsigned int size):n(size)
    {
        this->arr = new T[n];
    }
    unsigned int get_size() const
    {
        return (this->n);
    }
    Array(const Array<T>& a)
    {
        *this = a;
    }
    Array <T> &operator=(const Array<T>& obj)
    {
        this->n = obj.n;
        this->arr = new T[this->n];
        for (unsigned int i = 0; i < this->n ; i++)
        {
            this->arr[i] = obj.arr[i]; 
        }
        return (*this);
    }
    T &operator[](unsigned int index)
    {
        if (this->get_size() == 0)
            throw Array <T>::IndexNotFound();
        if (index > this->n - 1)
            throw Array <T>::IndexNotFound();
        return (this->arr[index]);
    }
    class IndexNotFound: public std::exception
    {
        public:
        virtual const char* what() const throw()
        {
            return("this index doesn't exit in your array");
        }
    };
    ~Array()
    {
        delete this->arr;
    }
};

# endif