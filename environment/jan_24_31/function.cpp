#include <iostream>
using namespace std;
/* Author : Benjamin Power*/

//swaps 2 passed intigers around
void swapInts(int *p, int * x){
    int temp = *p;
    *p = *x;
    *x = temp;
}

int main()
{
    int num1; //user defined intager variables
    int num2;
    
    cout << "Enter 2 integers\n"; //gets user input
    cin >> num1;
    cin >> num2;
    
    cout << "Before Swap:\nnum1 = " << num1 << " num2 = " << num2<< "\n"; //prints origian
    swapInts(&num1, &num2);
    cout << "After Swap:\nnum1 = " << num1 << " num2 = " << num2; //prints swaped
    return 0;
}


