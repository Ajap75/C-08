/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addNumber.tpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 16:34:27 by anastruc          #+#    #+#             */
/*   Updated: 2025/04/04 16:53:03 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <algorithm>
#include "../headers/Span.hpp"
#ifndef ADDNUMBER_TPP
#define ADDNUMBER_TPP

template <typename InputIterator>
void Span::addNumber(InputIterator begin, InputIterator end)
{
    size_t rangeSize = std::distance(begin, end);
    if (rangeSize + array.size() > maxSize)
        throw Span::SpanIsFullException();
    array.insert(array.begin(), begin, end);
}

#endif
