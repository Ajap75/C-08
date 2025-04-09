/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 11:01:06 by anastruc          #+#    #+#             */
/*   Updated: 2025/04/09 17:40:25 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <algorithm>
#include "../headers/Span.hpp"
#include "../headers/Colors.hpp"
#include <iostream>

// C&D

Span::Span() : maxSize(0)
{
}
Span::~Span()
{
}
Span::Span(int N) : maxSize(N)
{
    array.reserve(maxSize);
}
Span::Span(const Span &other) : maxSize(other.maxSize), array(other.array)
{
}
Span& Span::operator = (const Span &other)
{
    if (this != &other)
    {
        this->maxSize = other.maxSize;
        this->array = other.array;
    }
    return (*this);
}


// Member function
void Span::addNumber(int nbr)
{
    if (array.size() < this->maxSize)
        array.push_back(nbr);
    else
        throw Span::SpanIsFullException();
}

const char* Span::NotEnoughElementInSpan::what() const throw()
{
    return ("\033[1;31mNot enough element in the Span to calculate anything\033[0m");
}
const char* Span::SpanIsFullException::what() const throw()
{
    return ("\033[1;31mSpan is full\033[0m");
}
unsigned int Span::shortestSpan() const
{
    unsigned int shortest;
    int prev_elem;
    int elem;
    std::vector<int> copy;
    
    copy = array;

    // Size check
    if (copy.empty() || copy.size() < 2)
        throw Span::NotEnoughElementInSpan();
        
    std::sort(copy.begin(), copy.end());
            
    // array.end() point to one spot after the last value in the vector 
    shortest = (unsigned int)(*(--copy.end()) - *copy.begin());
    
    for(std::vector<int>::iterator it = copy.begin(); it != copy.end(); ++it)
    {
        elem = *it;
        if (it == copy.begin())
            prev_elem = *it;
        if (it != copy.begin())
        {

            if ((((unsigned int)elem - (unsigned int)prev_elem) < shortest))
                shortest = ((unsigned int)elem - (unsigned int)prev_elem);
            prev_elem = elem;
        }
    }
    return (shortest);
}

unsigned int Span::longestSpan() const
{
    std::vector<int> copy;
    copy = array;
    if (copy.empty() || copy.size() < 2)
        throw Span::NotEnoughElementInSpan();
    std::sort(copy.begin(), copy.end());
    // array.end() point to one spot after the last value in the vector 
    return ((unsigned int)(*(--copy.end()) - *copy.begin()));
}


void Span::print_vector()
{
    for(std::vector<int>::iterator it = this->array.begin(); it != this->array.end(); ++it)
    {
        std::cout << GREEN << *it << RESET << std::endl;
    }
    std::cout << std::endl <<  std::endl;

}
