#include <iostream>
#include <cstdlib>
using namespace std;
int chance, i;




int main()
{
    //Random number generation from the computer
    srand(time(nullptr));
    int N = 100 ;
    int Random = rand() % N ;
    cout << Random << endl;
    char c;
    // Let the user choose level of difficulty
    cout << "Choose the Level of Difficulty:";
    cin >> c;
    
    if (c=='E'){
        chance = 10;
        int guess;
        cout << "Easy Difficulty is Selected:"<< endl;
        cout << endl;
        cout << "You will get guesses " << chance << " to do the correct guess." << endl; 
        for (int i=1; i<=chance; i++)
        {
        cout << "game Started" << endl;
        cout << "Enter the guess:" << endl;
        cin >> guess;
        cout << guess << "&"<< Random ;
        if (guess == Random){
            cout << "Won Correct Guess:";
        }
        else if (guess < Random ){
            cout << "Try entering Larger Value:";
        }
        else {
            cout << "Try Entering Smaller Valur:";
        }
        } 
        
cout << "You Have Lost the Game:"<< endl;

    }
    else if (c== 'M'){
        chance = 5;
        cout << "Medium Difficulty is Selected:"<< endl;
        cout << endl;
        cout << "You will get guesses " << chance << " to do the correct guess." << endl;
    for (i=1; i<=chance; i++)
    {
        int guess, Random;
        cout << "game Started" << endl;
        cout << "Enter the guess:" << endl;
        cout << Random;
        cin >> guess;
        cout << guess << "&"<< Random ;
        if (guess == Random){
            cout << "Won Correct Guess:";
        
        }
        else if (guess < Random ){
            cout << "Try entering Larger Value:";

        }
        
        
    } 

    }
    else {
        chance = 3;
        cout << "Hard Difficulty is Selected:"<< endl;
        cout << endl;
        cout << "You will get guesses " << chance << " to do the correct guess." << endl;
    for (i=1; i<=chance; i++)
    {
        int guess, Random;
        cout << "game Started" << endl;
        cout << "Enter the guess:" << endl;
        cout << Random;
        cin >> guess;
        cout << guess << "&"<< Random ;
        if (guess == Random){
            cout << "Won Correct Guess:";
        
        }
        else if (guess < Random ){
            cout << "Try entering Larger Value:";

        }
        
        
    } 
    }
    
    return 0;
       
}


// user can set the difficulty level of the game to Easy, Medium , Diffcult with the different Number of Levels for the each level
// Computer tells if the guess is right or wrong or if the guess is less than or more than actual number  
// 