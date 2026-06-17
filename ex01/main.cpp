/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmorale <crmorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 15:46:37 by crmorale          #+#    #+#             */
/*   Updated: 2026/06/16 15:49:37 by crmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Iter.hpp"


void printInt(int &x)
{
    std::cout << x << std::endl;
}


void printIntConst(const int &x)
{
    std::cout << x << std::endl;
}

void increment(int &x)
{
    x += 1;
}

void printString(const std::string &s)
{
    std::cout << s << std::endl;
}

void addExclamation(std::string &s)
{
    s += "!";
}

int main()
{
    std::cout << "===== TEST 1: int print =====" << std::endl;
    int arr1[] = {1, 2, 3, 4, 5};
    iter(arr1, 5, printInt);

    std::cout << "\n===== TEST 2: modify values =====" << std::endl;
    iter(arr1, 5, increment);
    iter(arr1, 5, printInt);

    std::cout << "\n===== TEST 3: const int array =====" << std::endl;
    const int arr2[] = {10, 20, 30};
    iter(arr2, 3, printIntConst);

    std::cout << "\n===== TEST 4: strings =====" << std::endl;
    std::string arr3[] = {"hola", "mundo", "cpp"};
    iter(arr3, 3, printString);

    std::cout << "\n===== TEST 5: modify strings (length check) =====" << std::endl;
  	iter(arr3, 3, addExclamation);
    iter(arr3, 3, printString);

    return 0;
}