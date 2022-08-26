// =================================================================
//
// File: activity.h
// Author: Fernando Matute - A00833375
// Date: 25 de agosto de 2022
//
// =================================================================
#ifndef ACTIVITY_H
#define ACTIVITY_H

#include <iostream>
using namespace std;

// =================================================================
// sumaIterativa. Calculate the sum from 1 to n with an iterative
// method.
//
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
// @Complexity	O(n)
// =================================================================
unsigned int sumaIterativa(unsigned int n) {
    int sum;
    for (int i = 0; i <= n ; i++){
        sum = sum + i;
    }
	return sum;
}

// =================================================================
// sumaRecursiva. Calculate the sum from 1 to n with an recursive
// method.
//
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
// @Complexity	O(n)
// =================================================================
unsigned int sumaRecursiva(unsigned int n) {
    int sum;
    if(n == 2){
        sum = 1 + 2;
    }
    else{
        sum = n + sumaRecursiva(n - 1);
    }
    return sum;
}

// =================================================================
// sumaDirecta. Calculate the sum from 1 to n with a mathematical
// method.
//
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
// @Complexity	O(1)
// =================================================================
unsigned int sumaDirecta(unsigned int n) {
    int sum;
    sum = (n * (n + 1))/ 2;
	return sum;
}

#endif /* ACTIVITY_H */
