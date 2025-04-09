/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 15:50:55 by anastruc          #+#    #+#             */
/*   Updated: 2025/04/09 15:12:25 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <algorithm>

template <typename T>
typename T::iterator easyfind(T &container, int i);

#include "../srcs/easyfind.tpp"

/*T is a template parameter.
T::iterator depends on what T is.
So by default, the compiler assumes it's a non-type, unless you explicitly tell it otherwise.
That’s why you need to prefix it with typename.*/