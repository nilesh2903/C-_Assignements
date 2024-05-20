#include<iostream>
using namespace  std;

class MyStudent{
    public:             //Acess Specifier
    int Maths;          // Atribute
    int Sci;            /// Atribute
    int Eng;            // Atribute
    MyStudent(int x, int y, int z)      //Constructor with Paramter 
    {
        Maths = x;
        Sci = y;
        Eng = z;

    }   
};

int main()
{
    MyStudent myMarks(99, 50, 60) ;       //Creation of the Object 
    cout << myMarks.Maths << myMarks.Sci   << myMarks.Eng << endl;
}