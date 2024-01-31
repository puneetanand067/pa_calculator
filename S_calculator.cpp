// Name: Puneet Anand
// TRU ID: T00616412
// Project - Calculator
// This is the .cpp file for all the template functions in the Scientific Calculator.

#include <cmath>
#include "S_calculator.h"

// Basic trignometric functions
template<typename T>
T S_calculator<T>::sinResult(T num){
    res = sin(num);
    if(isnan(res)){
        res = 0;
    }
    return res;
}
template<typename T>
T S_calculator<T>::cosResult(T num){
    res = cos(num);
    if(isnan(res)){
        res = 0;
    }
    return res;
}
template<typename T>
T S_calculator<T>::tanResult(T num){
    res = tan(num);
    if(isnan(res)){
        res = 0;
    }
    return res;
}

// Inverse Trignometric functions
template<typename T>
T S_calculator<T>::arcsinResult(T num){
    res = asin(num);
    if(isnan(res)){
        res = 0;
    }
    return res;
}
template<typename T>
T S_calculator<T>::arccosResult(T num){
    res = acos(num);
    if(isnan(res)){
        res = 0;
    }
    return res;
}
template<typename T>
T S_calculator<T>::arctanResult(T num){
    res = atan(num);
    if(isnan(res)){
        res = 0;
    }
    return res;
}

template class S_calculator<int>;
template class S_calculator<float>;
template class S_calculator<double>;
