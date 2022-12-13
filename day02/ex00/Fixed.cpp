/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:03:53 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/11/20 18:04:22 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout<< "Default constructor called" << std::endl;
    this->nbr = 0;
}

Fixed::Fixed(int const nbr):nbr(nbr)
{
    return ;
}

Fixed::Fixed(const Fixed& f)
{
    std::cout<< "Copy constructor called" << std::endl;
    *this = f;
    return ;
}

 Fixed& Fixed::operator=(const Fixed &f )
{ 
    std::cout<< "Copy assignment operator called" << std::endl;
    nbr =f.getRawBits();
    return (*this);
}

void Fixed::setRawBits( int const raw )
{
    this->nbr = raw;    
}

int Fixed::getRawBits( void ) const
{
    std::cout<< "getRawBits member function called" << std::endl;
    return (this->nbr);
}

Fixed::~Fixed()
{
    std::cout<< "Destructor called" << std::endl;
}