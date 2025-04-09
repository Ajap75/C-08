/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 15:38:13 by anastruc          #+#    #+#             */
/*   Updated: 2025/04/09 11:57:22 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algorithm"
#include <vector>
#include <stack>
#include <cstdlib>
#include <iostream>

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

template <typename T>
class MutantStack : public std::stack<T>
{
    // Alias creation for better clarity : std::stack::container_type::itertor --> iterator
    // typename is used to tell the compiler : "Yes it's a type name. otherwise it cannot understand the syntax"
    public :
    
    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::const_iterator const_iterator;
    typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
    typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
    
       
    MutantStack() {}
    virtual ~MutantStack() {}
    MutantStack( const MutantStack<T> &other ) : std::stack<T>(other){}

    MutantStack<T>& operator =( const MutantStack<T> &other )
    {
        if (this != &other)
        {
            std::stack<T>::operator=(other);
        }
        return (*this);
    }

    iterator begin()
    {
        return (this->c.begin());
    }
    iterator end() 
    {
        return (this->c.end());
    }
    
    const_iterator begin() const
    {
        return (this->c.begin());
    }
    
    const_iterator end() const
    {
        return (this->c.end());
    }
    

    reverse_iterator rbegin()
    {
        return (this->c.rbegin());
    }
    
    reverse_iterator rend()
    {
        return (this->c.rend());
    }
    const_reverse_iterator rbegin() const
    {
        return (this->c.rbegin());
    }

    const_reverse_iterator rend() const
    {
        return (this->c.rend());
    }
    

};

#endif

