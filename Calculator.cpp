// Name: Puneet Anand
// TRU ID: T00616412
// Project - Calculator
// This is the .cpp file for all the template functions in a Basic Calculator.

#include <cmath>
#include "Calculator.h"

template <typename T>
T Calculator<T>::result_addition(T num1, T num2){
    res = num1 + num2;
    return res;
}

template <typename T>
T Calculator<T>::result_subtraction(T num1, T num2){
    res = num1 - num2;
    return res;
}

template <typename T>
T Calculator<T>::result_multiplication(T num1, T num2){
    res = num1 * num2;
    return res;
}

template <typename T>
T Calculator<T>::result_division(T num1, T num2){
    if(num2 != 0)
        res = num1/num2;
    else
        res = 0;
    return res;
}

template <typename T>
T Calculator<T>::result_square(T num){
    res = num * num;
    return res;
}

template <typename T>
T Calculator<T>::result_sqRoot(T num){
    res = sqrt(num);
    return res;
}

template class Calculator<int>;
template class Calculator<float>;
template class Calculator<double>;
