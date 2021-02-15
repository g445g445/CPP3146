#include <iostream>
#include <cmath>
using namespace std;
/* Author : Benjamin Power*/

//a data structure of a two-dimensional Cartesian coordinate
struct Point{
    float x;
    float y;
};

//calculates the distance formula using Cartesian coordinates
float calculateDistance (Point* first, Point* secound){
 return sqrt(((secound->x - first->x)*(secound->x - first->x))+((secound->y - first->y)*(secound->y - first->y)));
}


int main()
{
    
 Point p1; //user defined data sturcture
 Point p2;

 cout << "Enter a x and y for point 1\n";
 cin>>p1.x>>p1.y;
 cout << "Enter a x and y for point 2\n";
 cin>>p2.x>>p2.y;
 cout <<"Disitace between the points: " <<calculateDistance(&p1,&p2); //prints the final distance

return 0;
}