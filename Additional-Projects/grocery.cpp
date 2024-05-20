// checkout system forthe grocery store
#include <iostream>
using namespace std;

class item{
    public:
    string name;
    float price;
    int quantity;
    float discount;
};


int main()
{
        cout << "Welcome to the grocery Store!!" << endl;
        int n,m=0,j;
        item Item;
        Item.name= "";
        Item.price= j;
        //string list[] = {};

       do
       {
        cout << "press 1 to continue add more items or press 0 to enter billing mode:" << endl;

        cin >> n ;
        m++;
        cout << m;
       } while (n ==1);
}