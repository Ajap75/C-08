/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 15:50:58 by anastruc          #+#    #+#             */
/*   Updated: 2025/04/03 17:27:03 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <vector>
#include <algorithm>


template <typename T>
typename T::iterator easyfind(T &container, int i)
{
    typename T::iterator it = std::find(container.begin(), container.end(), i);
    if (it == container.end())
        throw (std::exception());
    else
        return (it);
}