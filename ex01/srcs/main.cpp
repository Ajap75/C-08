/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 13:10:16 by anastruc          #+#    #+#             */
/*   Updated: 2025/04/04 18:10:31 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <algorithm>
#include "../headers/Span.hpp"
#include "../headers/Colors.hpp"
#include "../headers/functions.hpp"
#include <iostream>
#include <cstdlib>


int main (void)
{
    //SCOP1
    std::cout << MAGENTA << "==========TEST #1 Short/Longest Functions and Basics =========" << std::endl;
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
    sp.print_vector();
    
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
    std::cout << MAGENTA << "================================================" << std::endl;
    
    }
    //SCOP2
    std::cout  << std::endl;
    std::cout << MAGENTA << "==========TEST #2 Different Exception =========" << std::endl;
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
    sp.print_vector();
    
    try
    {
        std::cout << YELLOW << "The Shortest distance between two elements of the Span is : " << std::endl;
        std::cout << GREEN << sp.shortestSpan() << std::endl;
        std::cout << YELLOW << "The Longest distance between two elements of the Span is : " << std::endl;
        std::cout << GREEN << sp.longestSpan() << std::endl;
        std::cout << MAGENTA << "=========================" << std::endl;

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << MAGENTA << "================================================================" << std::endl;

    //SCOP3
    {
       
    try
    {
        std::cout  << std::endl;
        std::cout << MAGENTA << "==========TEST #3 : Adding Number using Range of Iterator =========" << std::endl;
        std::vector<int> Input_vector = VectorGenerator(10000);
        Span span = Span(10000);
        span.addNumber(Input_vector.begin(), Input_vector.end());
        std::cout << YELLOW << "The original Span : " << std::endl;
        // span.print_vector();
        std::cout << YELLOW << "The Shortest distance between two elements of the Span is : " << std::endl;
        std::cout << GREEN << span.shortestSpan() << std::endl;
        std::cout << YELLOW << "The Longest distance between two elements of the Span is : " << std::endl;
        std::cout << GREEN << span.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    }
}