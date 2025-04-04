/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 16:59:45 by anastruc          #+#    #+#             */
/*   Updated: 2025/04/03 18:03:48 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/easyfind.hpp"
#include "../headers/Colors.hpp"
#include <iostream>

int main(void)
{
    
    std::vector<int>array;
    std::vector<int>::iterator it_standard;
    std::vector<int>::iterator it_mine;
    int i;
    int j;
    int k;
    i = 0;
    j = 4;
    k = 6;
    
    
    // INITIALIZE ARRAY
    for (i = 0; i < 5; ++i)
        array.push_back(i);

        
    std::cout << YELLOW <<  "TEST : OCCURENCE FOUND" << RESET << std::endl;

    try
    {
        std::cout << YELLOW <<  "STANDARD BEHAVIOR" << RESET << std::endl;
        it_standard = std::find(array.begin(), array.end(), j);
        if (it_standard == array.end())
            std::cout << "it = array.end()" << std::endl;
        else 
            std::cout << "it = " << *it_standard<< std::endl;

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        std::cout << YELLOW << "MY EASYFIND FUNCTION BEHAVIOR" << RESET << std::endl;
        it_mine = easyfind(array, j);
        std::cout << "it = " << *it_mine << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    std::cout << std::endl;
    std::cout << YELLOW <<  "TEST : OCCURENCE NOT FOUND" << RESET << std::endl;
    try
    {
        std::cout << YELLOW <<  "STANDARD BEHAVIOR" << RESET << std::endl;
        it_standard = std::find(array.begin(), array. end(), k);
        if (it_standard == array.end())
            std::cout << "it = array.end()" << std::endl;
        else
            std::cout << "it = " << *it_standard<< std::endl;
            
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        std::cout << YELLOW << "MY EASYFIND FUNCTION BEHAVIOR" << RESET << std::endl;
        it_mine = easyfind(array, k);
        std::cout << "it = " << *it_mine<< std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}
