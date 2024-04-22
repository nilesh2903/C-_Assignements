#include<iostream>
using namespace std;
int percent,phy,chem,bio,math,comp;

//function to calculate the percentage of the marks
void percentage()
{
    percent = (phy+chem+bio+math+comp)/5;
    cout << percent;
}

int main()
{
    // Take inpit Subject Marks from the User 
    cout << "Enter the Markes of Pyhsics:";
    cin >> phy ;
    cout << "Enter the Markes of Chemistry:";
    cin >> chem;
    cout << "Enter the Markes of BBiology:";
    cin >> bio;
    cout << "Enter the Markes of Mathmatics:";
    cin >> math;
    cout << "Enter the Markes of Computer:";
    cin >> comp;
    percentage();

    // Peform Switch Case based on the calculated percetange
    int precent;
    switch(percent){
        case 1:
        cout << "Grade A";
        break;
        
        case 2:
        cout << "Grade A";
        break;
        
        case 3:
        cout << "Grade A";
        break;
        
        case 4:
        cout << "Grade A";
        break;
        
        case 5:
        cout << "Grade A";
        break;
        
        case 6:
        cout << "Grade A";
        break;
    }
    return 0;

}