//#include <studio.h>
#include <iostream>
#include <math.h>
using namespace std;

void sum();
void sub();
void multiplication();
void division();
void square();
void cube();
void powers();
void squareRoot();



int main()
{
    int options;
    cout << "options are:-" << endl;
    puts("1.sum");
    puts("2.sub");
    puts("3.multiplication");
    puts("4.division");
    puts("5.square");
    puts("6.cube");
    puts("7.powers");
    puts("8.squareRoot");

    cout << "Enter the number of option";
    cin >> options;
    switch (options)
    {
    case1:
        sum();
        break;
    case2:
        sub();
        break;
    case3:
        multiplication();
        break;
    case4:
        division();
        break;
    case5:
        square();
        break;
    case6:
        cube();
        break;
    case7:
        powers();
        break;
    case8:
        squareRoot();
        break;


    }
        void sum(void);
        {
            double num1, num2;
            cout << "Enter Two number to sum";
            cin >> num1 >> num2;
            cout << "sum is" << num1 + num2 << endl;
        }
        void sub(void);
        {
            double num1, num2;
            cout << "Enter Two number to sub";
            cin >> num1 >> num2;
            cout << "sub is" << num1 - num2 << endl;
        }
        void multiplication(void);
        {
            double num1, num2;
            cout << "Enter Two number to multiplication";
            cin >> num1 >> num2;
            cout << "multiplication is" << num1 * num2 << endl;
        }
        void division(void);
        {
            double num1, num2;
            cout << "Enter Two number to division";
            cin >> num1 >> num2;
            cout << "division is" << num1 / num2 << endl;
        }
        void square(void);
        {
            double num;
            cout << "Enter Two number to square";
            cin >> num;
            cout << "square is" << num * num << endl;
        }
        void cube(void);
        {
            double num;
            cout << "Enter a number to cube";
            cin >> num;
            cout << "cube is" << num * num * num << endl;
        }
        void powers(void);
        {
            double num, power;
            cout << "Enter a number to powers";
            cin >> num >> power;
            cout << "powers is" << pow(num, power) << endl;
        }
        void squareRoot(void);
        {
            double num;
            cout << "Enter a number to squareRoot";
            cin >> num;
            cout << "squareRoot is" << sqrt(num) << endl;
        }


}
