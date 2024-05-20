#include <iostream>
#include <string>
using namespace std;

//Base class

class LibraryItem {
    public:
    string title;
    string author;
    int pub_year;
    

};

class Books : public LibraryItem{
    public:
    string ISBN;

    void SetPubYear(int y)
    {   
        pub_year = y;
    }
    int GetPubYear()
    {
        return pub_year;
    }
    void SetTitle()
    {

    }
    string GetTitle()
    {

    }
};

class DVD: public LibraryItem{
    public:
    int runtime;
};

class AudioBook:  public LibraryItem{
    public:
    string narrator;
};



int main ()
{
    Books atomic_habits;
    atomic_habits.SetPubYear(2010);
    cout << atomic_habits.GetPubYear() << endl;

}


