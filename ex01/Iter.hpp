/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmorale <crmorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 22:47:38 by crmorale          #+#    #+#             */
/*   Updated: 2026/06/15 23:04:08 by crmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef>

template <typename T>
void iter(T* array, const size_t length, void (*func)(T&))
{
    for (size_t i = 0; i < length; i++)
        func(array[i]);
}

template <typename T>
void iter(const T* array, const size_t length, void (*func)(const T&))
{
    for (size_t i = 0; i < length; i++)
        func(array[i]);
}

#endif