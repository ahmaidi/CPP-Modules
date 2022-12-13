/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:03:56 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/11/20 18:04:18 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>
class Fixed
{
    private:
        int nbr;
        static const int scale = 8;
    public:
    Fixed();
    Fixed(int const nbr);
    Fixed(Fixed const & f);
    Fixed& operator=(const Fixed &D );
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    ~Fixed();
};
#endif