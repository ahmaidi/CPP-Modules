/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 15:19:20 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/11/20 18:19:07 by ahmaidi          ###   ########.fr       */
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
    std::cout<< "Int constructor called" << std::endl;
    this->nbr = nbr * (1 << scale);
    return ;
}
Fixed::Fixed(float const nbr):nbr(nbr)
{
    std::cout<< "Float constructor called" << std::endl;
    this->nbr = roundf(nbr * (1 << scale));
    return ;
}

Fixed::Fixed(const Fixed &f)
{
    std::cout<< "Copy constructor called" << std::endl;
    *this = f;
    return ;
}

 Fixed& Fixed::operator=(const Fixed &f )
{ 
    std::cout<< "Copy assignment operator called" << std::endl;
    nbr =f.nbr;
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

int Fixed::toInt( void ) const
{
    return (this->nbr / (1 << scale));
}

float Fixed::toFloat( void ) const
{
    return((float)this->nbr / (1 << scale));
}

Fixed::~Fixed()
{
    std::cout<< "Destructor called" << std::endl;
}

std::ostream &operator << (std::ostream &out, Fixed const &a)
{
    out << a.toFloat();
    return out;
}