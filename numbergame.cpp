#include <iostream>
#include <cstdlib>
using namespace std;


// Function for the guessing game logic
void guessgame()
{
    int i, chance, guess;
    for (i=1; i<=chance; i++)
    {
        int guess, Random;
        cout << "Enter the guess:" << endl;
        cin >> guess;
        if (guess == Random){
            cout << "Won Correct Guess:";
        
        }
        else if (guess < Random ){
            cout << "Try entering Larger Value:";

        }
        else 
        {
            cout << "Try Enterting Smaller Value:";

        }
    } 
}




int main()
{
    //Random number generation from the computer
    srand(time(nullptr));
    int N = 100 ;
    int Random = rand() % N ;
    cout << Random << endl;
        
    // Let the user choose level of difficulty
    cout << "Choose the Level of Difficulty:";
    char c;
    cin >> c;
    int chance,i;
    
    if (c=='E'){
        int chance = 10;
        cout << "Easy Difficulty is Selected:"<< endl;
        cout << endl;
        cout << "You will get guesses " << chance << " to do the correct guess." << endl; 
        guessgame();

    }
    else if (c== 'M'){
        int chance = 5;
        cout << "Medium Difficulty is Selected:"<< endl;
        cout << endl;
        cout << "You will get guesses " << chance << " to do the correct guess." << endl;
        guessgame();

    }
    else {
        int chance = 3;
        cout << "Hard Difficulty is Selected:"<< endl;
        cout << endl;
        cout << "You will get guesses " << chance << " to do the correct guess." << endl;
        guessgame();
    }
    
    return 0;
       
}


// user can set the difficulty level of the game to Easy, Medium , Diffcult with the different Number of Levels for the each level
// Computer tells if the guess is right or wrong or if the guess is less than or more than actual number  
// 