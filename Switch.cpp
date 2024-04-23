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
    //Switch case defination
    int i;
    if (percent>=90){
        i=1;
    }
    else if(percent>=80){
        i=2;
    }
    else if(percent>=70){
        i=3;
    }
    else if(percent>=60){
        i=4;
    }
    else if(percent>=40){
        i=5;
    }
    else{
        i=6;
    }

    switch(i){
        case 1:
        cout << "Grade A";
        break;
        
        case 2:
        cout << "Grade B";
        break;
        
        case 3:
        cout << "Grade C";
        break;
        
        case 4:
        cout << "Grade D";
        break;
        
        case 5:
        cout << "Grade E";
        break;
        
        case 6:
        cout << "Grade F";
        break;
    }
    return 0;

}