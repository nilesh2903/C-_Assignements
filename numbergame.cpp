#include <iostream>
#include <cstdlib>
using namespace std;
char c;
int chance, i=0;

/*
int randomnumber()
{
    //Random number generation from the computer
    srand(time(nullptr));
    int N = 100 ;
    Random = rand() % N ;
    cout << Random << endl;
    return Random;
}
*/
void easygame()
{
        srand(time(nullptr));
        int N = 100 ;
        int Random = rand() % N ;
        cout << Random << endl;
        chance = 10;
        int guess;
        cout << "Easy Difficulty is Selected:"<< endl;
        cout << "You will get guesses " << chance << " to do the correct guess." << endl; 
        cout << "game Started!!!" << endl;
        do 
        {
        cout << "Enter the guess:" << endl;
        cin >> guess;
        i++;
        cout << guess << "&"<< Random ;
        if (guess == Random){
            cout << "Won Correct Guess:";
        }
        else if (guess < Random && i<=chance ){
            cout << "Try entering Larger Value:";
        }
        else if (guess > Random && i <=chance ){
            cout << "Try Entering Smaller Valur:";
        }
        
        } while(i<= chance && guess!= Random);
        if (guess != Random)
        {
            cout << "Sorry you have lost the game :-) Please try again";
        }
}

void mediumgame()
{
        srand(time(nullptr));
        int N = 100 ;
        int Random = rand() % N ;
        cout << Random << endl;
        chance = 5;
        cout << "Medium Difficulty is Selected:"<< endl;
        cout << endl;
        cout << "You will get guesses " << chance << " to do the correct guess." << endl;
        int guess;
    do
    {
        cout << "Enter the guess:" << endl;
        cin >> guess;
        i++;
        cout << guess << "&"<< Random ;
        if (guess == Random){
            cout << "Won Correct Guess:";
        }
        else if (guess < Random && i<=chance ){
            cout << "Try entering Larger Value:";
        }
        else if (guess > Random && i <=chance ){
            cout << "Try Entering Smaller Valur:";
        }
        
        } while(i<= chance && guess!= Random);
        if (guess != Random)
        {
            cout << "Sorry you have lost the game :-) Please try again";
        }
}

void hardgame()
{
        srand(time(nullptr));
        int N = 100 ;
        int Random = rand() % N ;
        cout << Random << endl;
        chance = 3;
        cout << "Hard Difficulty is Selected:"<< endl;
        cout << endl;
        cout << "You will get guesses " << chance << " to do the correct guess." << endl;
        int guess;
    do
    {
        cout << "Enter the guess:" << endl;
        cin >> guess;
        i++;
        cout << guess << "&"<< Random ;
        if (guess == Random){
            cout << "Won Correct Guess:";
        }
        else if (guess < Random && i<=chance ){
            cout << "Try entering Larger Value:";
        }
        else if (guess > Random && i <=chance ){
            cout << "Try Entering Smaller Valur:";
        }
        
        } while(i<= chance && guess!= Random);
        if (guess != Random)
        {
            cout << "Sorry you have lost the game :-) Please try again";
        }
}


int main()
{
    // Let the user choose level of difficulty
    cout << "Choose the Level of Difficulty:";
    cin >> c;
    
    if (c=='E')
     
    {
        easygame();
    }
    else if (c== 'M'){
        mediumgame();

    }
    else if (c=='H'){
        hardgame();
    }
    else {
        cout << "Please Enter the Valid Input : Either 'E' or 'M' or 'H' Depending upon the difficulty you want:";
    }
    }



// user can set the difficulty level of the game to Easy, Medium , Diffcult with the different Number of Levels for the each level
// Computer tells if the guess is right or wrong or if the guess is less than or more than actual number  
// 