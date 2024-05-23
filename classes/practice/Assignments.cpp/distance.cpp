#include<iostream>
using namespace std;
 
 class Point{
    public:
    int x ,y;

    // constructor to intialize points coordinates
    Point (int xVal , int yVal){
        x= xVal;
        y= yVal;
    }
    // function to calculate the distance
    double distanceFromOrigin(){
        return sqrt(x * x + y * y);
    }

 };
 int main()
 {
    
 }