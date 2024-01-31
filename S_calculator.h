// Name: Puneet Anand
// TRU ID: T00616412
// Project Calcultor
// This is the header file for all the functions in a Scientific Calculator.

#ifndef SCALCULATOR_H
#define SCALCULATOR_H

using namespace std;

template <typename T>
class S_calculator {
    private:
        T res;
    public:
        S_calculator():res(0){/*Constructor*/}
        ~S_calculator(){/*Destructor*/}

        T getRes() {
            return res;
        }
        void setRes(T in_res){
            res = in_res;
        }

        // All basic trignometric functions
        T sinResult(T num);
        T cosResult(T num);
        T tanResult(T num);
        T arcsinResult(T num);
        T arccosResult(T num);
        T arctanResult(T num);
};

#endif // SCALCULATOR_H
