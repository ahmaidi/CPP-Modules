/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 00:37:27 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/11/10 13:07:21 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

void Harl::debug( void )
{
    std::cout << "[DUBEG] I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info( void )
{
    std::cout << "[INFO] I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}
void Harl::warning( void )
{
std::cout << "[WARNING] I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."<< std::endl;
}

void Harl::error( void )
{
    std::cout <<"[ERROR] I think I deserve to have some extra bacon for free. I ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::complain( std::string level)
{
    int i;
    std::string levels[4] = {"DUBEG", "INFO", "WARNING", "ERROR"};
    for(i = 0 ; i < 4; i++)
    {
        if (levels[i] == level)
            break ;
    }
    switch(i) {
        case 0:
          debug();
        case 1:
          info();
        case 2:
            warning();
        case 3:
            error();
            break;
        default:
          std::cout <<"[ Probably complaining about insignificant problems ]" << std::endl;
    }
}