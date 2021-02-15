#include <iostream>
using namespace std;
/* Author : Benjamin Power
With help from Lightweight Team member Ben Mcdonald */
int main()
{
    // ---  Part 1 ---
    //step 1
    int myInt = 15;
    int * myPointer = &myInt;
    //step 2
    cout << &myInt << " " << myPointer<< "\n";
    cout << myInt << " " << *myPointer<< "\n";
    //step 3
    myInt = 10;
    cout << &myInt << " "<< myPointer<< "\n";
    cout << myInt << " "<< *myPointer<< "\n";
    
    
    
    return 0;
}