/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 19:24:31 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/11/16 03:14:58 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H
#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int nbr;
        static const int scale = 8;
    public:
    Fixed();
    Fixed(int const nbr);
    Fixed(float const nbr);
    Fixed(Fixed const & f);
    Fixed& operator=(const Fixed &D );
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    float toFloat( void ) const;
    int toInt( void ) const;
    bool operator==( const Fixed& obj) const;
    bool operator>(const Fixed& obj) const;
    bool operator>=(const Fixed& obj) const;
    bool operator<(const Fixed& obj) const;
    bool operator<=(const Fixed& obj) const;
    bool operator!=( const Fixed& obj) const;
    Fixed operator+( const Fixed& obj);
    Fixed operator-( const Fixed& obj);
    Fixed operator*( const Fixed& obj);
    Fixed operator/( const Fixed& obj);
    Fixed& operator++(void);
    Fixed& operator--(void);
    Fixed operator++(int);
    Fixed operator--(int);
    static Fixed& min(Fixed& a, Fixed&b);
    static Fixed& max(Fixed& a, Fixed&b);
    static const Fixed& max(const Fixed& a, const Fixed& b);
    static const Fixed& min(const Fixed& a, const Fixed& b);
    ~Fixed();
};

std::ostream &operator << (std::ostream &out, Fixed const &a);
#endif