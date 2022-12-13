/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 15:11:58 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/11/20 18:18:51 by ahmaidi          ###   ########.fr       */
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
    Fixed(const Fixed  &f);
    Fixed& operator=(const Fixed &D );
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    float toFloat( void ) const;
    int toInt( void ) const;
    ~Fixed();
};

std::ostream &operator << (std::ostream &out, Fixed const &a);
#endif