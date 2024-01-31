// Name: Puneet Anand
// TRU ID: T00616412
// Project - Calculator
// Driver program to test the functions created in both the calculators.

#include <iostream>
#include "Calculator.h"
#include "S_calculator.h"
using namespace std;

int main(){
    Calculator<double> calc;
    S_calculator<double> s_calc;
    char op_choice;
    int user_choice;
    double* num1 = nullptr;
    double num2;
    double res_num = 0.0;
    while(true){
        cout << "Calculator Menu" << endl;
        cout << "\nPress 1 to switch to the Basic Calculator" << endl;
        cout << "Press 2 to switch to the Scientific Calculator" << endl;\
        cout << "Press 3 to exit the Program" << endl;
        cout << "\nChoice: ";
        cin >> user_choice;

        switch(user_choice){
            case 1:
                if(num1 == nullptr){
                    cout << "\nEnter a value to proceed: ";
                    num1 = new double;
                    cin >> *num1;
                    calc.setRes(*num1);
                }
                else{
                    calc.setRes(s_calc.getRes());
                    cout << "\nCurrent Value: " << calc.getRes() << endl;
                }

                cout << "\nCalculation Menu\n" << endl;
                cout << "Press + to perform addition" << endl;
                cout << "Press - to perform subtraction" << endl;
                cout << "Press * to perform multiplication" << endl;
                cout << "Press / to perform division" << endl;
                cout << "Press s to get the Square of the Number" << endl;
                cout << "Press r to get the Square Root of the Number" << endl;
                cout << "Press e to mov up in the Menu\n" << endl;
                cin >> op_choice;

                while(op_choice != 'e'){
                    switch(op_choice){
                        case '+':
                            cout << "Enter value to proceed: ";
                            cin >> num2;
                            res_num = calc.result_addition(calc.getRes(), num2);
                            calc.setRes(res_num);
                            cout << "\nResult: " << calc.getRes() << endl;
                            break;
                        case '-':
                            cout << "Enter value to proceed: ";
                            cin >> num2;
                            res_num = calc.result_subtraction(calc.getRes(), num2);
                            calc.setRes(res_num);
                            cout << "\nResult: " << calc.getRes() << endl;
                            break;
                        case '*':
                            cout << "Enter value to proceed: ";
                            cin >> num2;
                            res_num = calc.result_multiplication(calc.getRes(), num2);
                            calc.setRes(res_num);
                            cout << "\nResult: " << calc.getRes() << endl;
                            break;
                        case '/':
                            cout << "Enter value to proceed: ";
                            cin >> num2;
                            res_num = calc.result_division(calc.getRes(), num2);
                            calc.setRes(res_num);
                            cout << "\nResult: " << calc.getRes() << endl;
                            break;
                        case 's':
                            res_num = calc.result_square(calc.getRes());
                            calc.setRes(res_num);
                            cout << "\nResult: " << calc.getRes() << endl;
                            break;
                        case 'r':
                            res_num = calc.result_sqRoot(calc.getRes());
                            calc.setRes(res_num);
                            cout << "\nResult: " << calc.getRes() << endl;
                            break;
                        case 'e':
                            break;
                        default:
                            cout << "Invalid Operation Selected! Please try Again" << endl;
                    }

                    cout << "\nCalculation Menu\n" << endl;
                    cout << "Press + to perform addition" << endl;
                    cout << "Press - to perform subtraction" << endl;
                    cout << "Press * to perform multiplication" << endl;
                    cout << "Press / to perform division" << endl;
                    cout << "Press s to get the Square of the current Value" << endl;
                    cout << "Press r to get the Square Root of the current Value" << endl;
                    cout << "\nPress e to move up in the Menu\n" << endl;
                    cin >> op_choice;
                }
                break;
            case 2:
                if(num1 == nullptr){
                    cout << "\nEnter a value to proceed: ";
                    num1 = new double;
                    cin >> *num1;
                    s_calc.setRes(*num1);
                }
                else{
                    s_calc.setRes(calc.getRes());
                    cout << "\nCurrent Value: " << s_calc.getRes() << endl;
                }

                cout << "\nCalculation Menu\n" << endl;
                cout << "Press s to get the sin() of current Value" << endl;
                cout << "Press c to get the cos() of current Value" << endl;
                cout << "Press t to get the tan() of current Value" << endl;
                cout << "Press i to get the arcsin() of current Value" << endl;
                cout << "Press o to get the arccos() of current Value" << endl;
                cout << "Press a to get the arctan() of current Value" << endl;
                cout << "\nPress e to move up in the Menu\n" << endl;
                cin >> op_choice;

                while(op_choice != 'e'){
                    switch(op_choice){
                        case 's':
                            res_num = s_calc.sinResult(s_calc.getRes());
                            s_calc.setRes(res_num);
                            cout << "\nResult: " << s_calc.getRes() << endl;
                            break;
                        case 'c':
                            res_num = s_calc.cosResult(s_calc.getRes());
                            s_calc.setRes(res_num);
                            cout << "\nResult: " << s_calc.getRes() << endl;
                            break;
                        case 't':
                            res_num = s_calc.tanResult(s_calc.getRes());
                            s_calc.setRes(res_num);
                            cout << "\nResult: " << s_calc.getRes() << endl;
                            break;
                        case 'i':
                            res_num = s_calc.arcsinResult(s_calc.getRes());
                            s_calc.setRes(res_num);
                            cout << "\nResult: " << s_calc.getRes() << endl;
                            break;
                        case 'o':
                            res_num = s_calc.arccosResult(s_calc.getRes());
                            s_calc.setRes(res_num);
                            cout << "\nResult: " << s_calc.getRes() << endl;
                            break;
                        case 'a':
                            res_num = s_calc.arctanResult(s_calc.getRes());
                            s_calc.setRes(res_num);
                            cout << "\nResult: " << s_calc.getRes() << endl;
                            break;
                        case 'e':
                            break;
                        default:
                            cout << "Invalid Operation Selected! Please try Again" << endl;
                    }

                    cout << "\nCalculation Menu\n" << endl;
                    cout << "Press s to get the sin() of current Value" << endl;
                    cout << "Press c to get the cos() of current Value" << endl;
                    cout << "Press t to get the tan() of current Value" << endl;
                    cout << "Press i to get the arcsin() of current Value" << endl;
                    cout << "Press o to get the arccos() of current Value" << endl;
                    cout << "Press a to get the arctan() of current Value" << endl;
                    cout << "\nPress e to move up in the Menu\n" << endl;
                    cin >> op_choice;
                }
                break;
            case 3:
                return 0;
            default:
                cout << "Invalid input value, try again!" << endl;
        }
    }
    return 0;
}
