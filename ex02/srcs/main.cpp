/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 15:38:06 by anastruc          #+#    #+#             */
/*   Updated: 2025/04/09 14:49:44 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/MutantStack.hpp"
#include "../headers/Colors.hpp"
#include <list>
#include <vector>

int main()
{
{
    std::cout << YELLOW << "TEST 1) Stack style with classic iterator" << std::endl; 
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << YELLOW << mstack.top() << std::endl;
    mstack.pop();
    std::cout << YELLOW<< mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
    std::cout << YELLOW << *it << std::endl;
    ++it;
    }
    std::stack<int> s(mstack);
    std::cout << YELLOW << "____________________________" << std::endl; 
}
{
    std::cout << YELLOW << "TEST 2) Stack style with const iterator" << std::endl; 
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << YELLOW << mstack.top() << std::endl;
    mstack.pop();
    std::cout << YELLOW<< mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int>::const_iterator it = mstack.begin();
    MutantStack<int>::const_iterator ite = mstack.end();
    ++it;
    --it;
    // *it = 7;
    while (it != ite)
    {
    std::cout << YELLOW << *it << std::endl;
    ++it;
    }
    std::stack<int> s(mstack);
    std::cout << YELLOW << "____________________________" << std::endl; 
}
{
    std::cout << YELLOW << "TEST 3) Stack style with const_reverse_iterator" << std::endl; 
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << YELLOW << mstack.top() << std::endl;
    mstack.pop();
    std::cout << YELLOW<< mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int>::const_reverse_iterator it = mstack.rbegin();
    MutantStack<int>::const_reverse_iterator ite = mstack.rend();
    ++it;
    --it;
    // *it = 7;
    while (it != ite)
    {
    std::cout << YELLOW << *it << std::endl;
    ++it;
    }
    std::stack<int> s(mstack);
    std::cout << YELLOW << "____________________________" << std::endl; 
}
{
    std::cout << YELLOW << "TEST 4) List container" << std::endl; 
    std::list<int> mstack;
    mstack.push_back(5);
    mstack.push_back(17);
    std::cout << mstack.back() << std::endl;
    mstack.pop_back();
    std::cout << mstack.size() << std::endl;
    mstack.push_back(3);
    mstack.push_back(5);
    mstack.push_back(737);
    //[...]
    mstack.push_back(0);
    std::list<int>::iterator it = mstack.begin();
    std::list<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
    std::cout << *it << std::endl;
    ++it;
    }
    std::list<int> s(mstack);
    std::cout << YELLOW << "____________________________" << std::endl; 
}
{
    std::cout << YELLOW << "TEST 5) vector container" << std::endl; 
    std::vector<int> mstack;
    mstack.push_back(5);
    mstack.push_back(17);
    std::cout << mstack.back() << std::endl;
    mstack.pop_back();
    std::cout << mstack.size() << std::endl;
    mstack.push_back(3);
    mstack.push_back(5);
    mstack.push_back(737);
    //[...]
    mstack.push_back(0);
    std::vector<int>::iterator it = mstack.begin();
    std::vector<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
    std::cout << *it << std::endl;
    ++it;
    }
    std::vector<int> s(mstack);
    return 0;
}
}

