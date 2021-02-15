#include <iostream>
using namespace std;
/* Author : Benjamin Power*/
int main()
{
    // ---  Part 2 ---
    int my_ints[4]; //user inputed array of ints
    int* my_ptrs[4]; //pointer array pointing at values of my_ints
    
    //takes user input
    cout << "Input 4 numbers\n";
    for(int x = 0; x < 4; x++){
        cin >> my_ints[x];
        my_ptrs[x] = &my_ints[x];
    }
    
    int j,k; //temp vars for sorting
    int * l; //temp var pointing at the current pivot location in the array
    
    //Insertion sort algorith, sorts smallest to largest
    for(int i = 1; i < 4; i++){
         k = *my_ptrs[i];
         l = my_ptrs[i];
         j = i-1;
         
        while(j >= 0 && *my_ptrs[j] > k){
            my_ptrs[j + 1] = my_ptrs[j];  
            j = j - 1;
        }
        
        my_ptrs[j+1] = l;
    }
    
    //printing the sorted
    cout << "\nSorted pointer array\n";
    for(int x = 0; x < 4; x++){
        cout << *my_ptrs[x];
    }
    
    //printing the unsorted
    cout << "\nUnsorted array\n";
    for(int x = 0; x < 4; x++){
        cout << my_ints[x];       
    }
    

    
    return 0;
}