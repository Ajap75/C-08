/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   VectorGenerator.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 17:53:15 by anastruc          #+#    #+#             */
/*   Updated: 2025/04/09 15:09:52 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/functions.hpp"
#include <ctime>

std::vector<int> VectorGenerator(int size)
{
    std::vector<int> result;
    result.reserve(size);
    srand(time(NULL));
    for(int i = 0; i < size; i++)
    {
        result.push_back(rand());
    }
    return (result);
}