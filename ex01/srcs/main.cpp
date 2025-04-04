/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 13:10:16 by anastruc          #+#    #+#             */
/*   Updated: 2025/04/04 15:32:46 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <algorithm>
#include "../headers/Span.hpp"
#include "../headers/Colors.hpp"
#include <iostream>

int main (void)
{
    //SCOP1
    std::cout << MAGENTA << "==========TEST #1=========" << std::endl;
    {
    Span sp = Span(5);
    try
    {
        sp.addNumber(-42);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << YELLOW << "The original Span : " << std::endl;
    print_vector(sp);
    
    try
    {
        std::cout << YELLOW << "The Shortest distance between two elements of the Span is : " << std::endl;
        std::cout << GREEN << sp.shortestSpan() << std::endl;
        std::cout << YELLOW << "The Longest distance between two elements of the Span is : " << std::endl;
        std::cout << GREEN << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << MAGENTA << "=========================" << std::endl;
    
    }
    //SCOP2
    std::cout  << std::endl;
    std::cout << MAGENTA << "==========TEST #2=========" << std::endl;
    Span sp = Span(1);
    try
    {
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << YELLOW << "The original Span : " << std::endl;
    print_vector(sp);
    
    try
    {
        std::cout << YELLOW << "The Shortest distance between two elements of the Span is : " << std::endl;
        std::cout << GREEN << sp.shortestSpan() << std::endl;
        std::cout << YELLOW << "The Longest distance between two elements of the Span is : " << std::endl;
        std::cout << GREEN << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

}