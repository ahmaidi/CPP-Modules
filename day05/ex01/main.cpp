/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:13:03 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/11/29 16:13:04 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "Form.hpp"

int main(void)
{
    try
    {
        Bureaucrat B("boss", 100);
        Form f("Form1", 110, 100);
        std::cout << f << std::endl;
        f.beSigned(B);
        std::cout << f << std::endl;
        B.signForm(f);
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}