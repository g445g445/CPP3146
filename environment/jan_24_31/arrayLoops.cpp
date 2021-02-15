#include <iostream>
using namespace std;
/* Author : Benjamin Power
With help from Lightweight Team member Ben Mcdonald */
int main()
{
    cout << "Enter 10 Numbers\n";
    
    int arr[10]; //Array to hold values for testing
    
    //Gets input from the user for the int array
    for (int x =0; x < 10; x++){
        cin >> arr[x];
    }
    
    cout << "All Numbers are in, printing in reverse order\n";
    //prints the int array in revers order
    for (int x = 9; x >= 0; x--){
        cout << arr[x] << " \n";
    }
    
    int j,k; //temp vars for sorting
    
    //Insertion sort algorith, sorts smallest to largest
    for(int i = 1; i < 10; i++){
        k = arr[i];
        j = i-1;
        while(j >= 0 && arr[j] > k){
            arr[j + 1] = arr[j];  
            j = j - 1;
        }
        arr[j+1] = k;
    }
    /* References
    geeksforgeeks - Help with insertion sort algorith and syntax in c++
    https://www.geeksforgeeks.org/insertion-sort/
    */
    
    
    cout << "Printing in sorted order\n";
    
    //prints array in the sorted order
    for (int x =0; x < 10; x++){
        cout << arr[x] << "\n";
    }
    return 0;
}