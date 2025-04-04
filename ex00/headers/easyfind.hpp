/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 15:50:55 by anastruc          #+#    #+#             */
/*   Updated: 2025/04/03 17:01:47 by anastruc         ###   ########.fr       */
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









/*Commençons tranquillement avec un premier exercice facile.
Écrivez une fonction template easyfind acceptant un type T. Elle prend deux para-
mètres. Le premier est de type T et le second un nombre entier.


Partant du principe que T est un container d’entiers, cette fonction doit trouver la
première occurrence du second paramètre dans le premier paramètre.


Si aucune occurrence n’a été trouvée, vous pouvez soit jeter une exception, soit re-
tourner une valeur d’erreur de votre choix. Si vous avez besoin d’inspiration, jetez un oeil
au comportement des containers standards.
Bien entendu, implémentez et rendez vos propres tests pour démontrer que tout
marche comme attendu.*/