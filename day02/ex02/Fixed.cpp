/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 19:24:43 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/11/17 18:44:02 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    this->nbr = 0;
}

Fixed::Fixed(int const nbr):nbr(nbr)
{
    this->nbr = nbr * (1 << scale);
    return ;
}
Fixed::Fixed(float const nbr):nbr(nbr)
{
    this->nbr = roundf(nbr * (1 << scale));
    return ;
}

Fixed::Fixed(const Fixed& f)
{
    *this = f;
    return ;
}

 Fixed& Fixed::operator=(const Fixed &f )
{ 
    nbr =f.nbr;
    return (*this);
}

void Fixed::setRawBits( int const raw )
{
    this->nbr = raw;    
}

int Fixed::getRawBits( void ) const
{
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
    return ;
}
//============= Comparaison ===============
bool Fixed::operator==( const Fixed& other) const
{
    return(nbr == other.nbr);
}

bool Fixed::operator>(const Fixed& other) const
{
    return(nbr > other.nbr);
}

bool Fixed::operator >=(const Fixed& other) const
{
    return(nbr >= other.nbr);
}

bool Fixed::operator<(const Fixed& other) const
{
    return(nbr < other.nbr);
}

bool Fixed::operator<=(const Fixed& other) const
{
    return(nbr <= other.nbr);
}

bool Fixed::operator!=(const Fixed& other) const
{
    return(!(nbr == other.nbr));
}
//====================================================

//========== Increment / Decrement =======================

// Overloading the prefix operator
Fixed& Fixed::operator++(void)
{
        ++this->nbr;
        return *this;
}
Fixed& Fixed::operator--(void)
{
        --this->nbr;
        return *this;
}

// Overloading the postfix operator
Fixed Fixed::operator++(int)
{
    // returned value should be a copy of the object before increment
    Fixed temp = *this;
        ++this->nbr;
        return temp;
}
Fixed Fixed::operator--(int)
{
    // returned value should be a copy of the object before increment
    Fixed temp = *this;
        --this->nbr;
        return temp;
}

//========================================================

//================== Operators Arithemitic ===============

Fixed Fixed::operator+( const Fixed& obj)
{
    this->nbr += obj.getRawBits();
    return(*this);
}

Fixed Fixed::operator-( const Fixed& obj)
{
    this->nbr -= obj.getRawBits();
    return(*this);
}

Fixed Fixed::operator*( const Fixed& obj)
{
    this->nbr = ((this->nbr * obj.getRawBits())) >> this->scale;
    return(*this);
}

Fixed Fixed::operator/ ( const Fixed& obj)
{
    this->nbr /= obj.getRawBits();
    return(*this);
}

//========================================================

//================ MIN / MAX =============================

Fixed& Fixed::min(Fixed& a, Fixed&b)
{
    if(a < b)
        return a;
    return b;
}
Fixed& Fixed::max(Fixed& a, Fixed&b)
{
    if (a > b)
        return a;
    return b;
}
const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
    if(a > b)
        return a;
    return b;
}
const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
    if(a < b)
        return a;
    return b;
}
//========================================================

std::ostream &operator << (std::ostream &out, Fixed const &a)
{
    out << a.toFloat();
    return out;
}