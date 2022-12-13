/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 19:09:28 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/11/24 16:05:00 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef WRONGCAT_H
# define WRONGCAT_H

# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongCat();
        WrongCat(std::string type);
        WrongCat(WrongCat const &A);
        WrongCat& operator=(WrongCat const &A);
        ~WrongCat();
        std::string getType(void) const;
        void makeSound(void) const;
};

#endif