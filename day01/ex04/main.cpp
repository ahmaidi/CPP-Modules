/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 18:20:51 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/11/10 14:04:53 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <fstream>
# include <string>


std::string replace(std::string myText, std::string search, std::string rpl)
{
    if (search.size() == 0 || rpl.size() == 0)
        return (myText);
    size_t found = myText.find(search);
    while (found != std::string::npos)
    {
        myText.erase(found,search.size());
        myText.insert(found, rpl);
        found = myText.find(search, found + rpl.size());
    }
    return(myText);
}

int main(int ac, char **ar)
{
    if (ac == 4)
    {
        std::string line;
        char chr;
        std::string infile = ar[1];
        std::ifstream file;
        file.open(infile, std::ios::in);
        if (!file.is_open() && !file.good())
        {
            std::cout << "file doesn't exist OR premission denied"<< std::endl;
            exit(1);
        }
        std::ofstream copy(infile.append(".replace"),std::ios::out);
        while (file.get(chr))
        {
            line += chr;
        }
            std::string new_line = replace(line, ar[2], ar[3]);
            copy << new_line;
    }
    else
        std::cout << "Error Arguments" << std::endl;
    return (0);
}