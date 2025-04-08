/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 15:38:13 by anastruc          #+#    #+#             */
/*   Updated: 2025/04/08 18:28:29 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algorithm"
#include <vector>
#include <stack>
#include <cstdlib>

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

template <typename T>
class MutantStack : public std::stack<T>
{
    // Alias creation for better clarity : std::stack::container_type::itertor --> iterator
    // typename is used to tell the compiler : "Yes it's a type name. otherwise it cannot understand the syntax"
    typedef typename std::stack::container_type::itertor iterator;
    
    
    MutantStack();
    ~MutantStack();
    MutantStack( const MutantStack &other );
    &MutantStack operator =( const MutantStack &other );

    iterator begin();
    iterator end();
    
};

#endif

