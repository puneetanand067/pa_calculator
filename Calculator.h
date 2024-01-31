// Name: Puneet Anand
// TRU ID: T00616412
// Project - Calculator
// This is the header file for all the functions in a Basic Calculator.

#ifndef CALCULATOR_H
#define CALCULATOR_H

using namespace std;

template <typename T>
class Calculator {
    private:
        T res;

    public:
        Calculator(): res(0){ /*Constructor*/ }
        ~Calculator() { /*Destructor*/ }

        T getRes() {
            return res;
        }
        void setRes(T in_res){
            res = in_res;
        }

        // Basic calculator functions
        T result_addition(T num1, T num2);
        T result_subtraction(T num1, T num2);
        T result_multiplication(T num1, T num2);
        T result_division(T num1, T num2);
        T result_square(T num);
        T result_sqRoot(T num);
};

#endif // CALCULATOR_H
