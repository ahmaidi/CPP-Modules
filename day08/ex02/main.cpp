/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 19:32:31 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/12/12 19:32:32 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "MutantStack.hpp"

int main(void)
{

MutantStack<int> mstack;

mstack.push(5); 
mstack.push(17); 
std::cout << mstack.top() << std::endl; 
mstack.pop(); 
std::cout << mstack.size() << std::endl;
mstack.push(3);
mstack.push(5);
mstack.push(737);
MutantStack<int>::iterator it = mstack.begin();
MutantStack<int>::iterator ite = mstack.end();
++it;
--it;
while (it != ite)
{
std::cout << *it << std::endl;
++it;
}
std::cout << "-----------------------------" << std::endl;
std::stack<int> s(mstack);

s.push(5); 
s.push(17); 
std::cout << s.top() << std::endl;
return 0;
}