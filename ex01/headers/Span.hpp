/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 10:47:06 by anastruc          #+#    #+#             */
/*   Updated: 2025/04/09 15:02:30 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#ifndef SPAN_HPP
#define SPAN_HPP

class Span
{
    public :
    
    unsigned maxSize;
    Span();
    ~Span();
    Span(int N);
    Span(const Span &other);
    Span& operator = (const Span &other); 
    
    // Nested Exception class
    class SpanIsFullException : public std::exception
    {
        public :
        const char* what() const throw();
    };
    
    class NotEnoughElementInSpan : public std::exception
    {
        public :
        const char * what() const throw();
    };
    
    // Member function
    void addNumber(int nbr);
    int shortestSpan() const ;
    int longestSpan() const ;

    void print_vector();

    template <typename InputIterator>
    void addNumber(InputIterator begin, InputIterator end);
    private :
    // Attributs
    std::vector<int>array;
    
        
};

#include "../srcs/addNumber.tpp"


#endif