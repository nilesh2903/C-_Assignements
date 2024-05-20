#include <iostream>
using namespace std;

class Drone{
    public:                 //common functionalities in the dorne 
    void take_off(){
        cout << "The Drone is Taking Off" << endl;
    }
    void go_to_lat_long(){
        cout << "Drone going to lat long:" << endl; 
    }
    void rtl(){
        cout << "Drone is performing RTL" << endl;
    }
    void landing(){
        cout << "Drone is performing laning:" << endl;
    }
};
class Indrone : public Drone{
    public:
    void swap_payload() {
        cout << "Drone payload is being swapped:" << endl;
    }
};

class DJI : public Drone{
    public:
    void landing_retraction(){
        cout << "retraction of the drone landing gear is started"  << endl;
    }
};
int main()
{
    Indrone s25;
    DJI inspire_1;                   //creation of the class object
    s25.take_off();
    inspire_1.landing_retraction(); // landing gear is retracted
}