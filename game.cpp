#include "game.h"
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

bool playGame(int guesses)
{
    cout << "Playing Game...\n";
    int correct;
    srand(time(NULL));
    if (guesses == 1)
    {
        correct = rand() % 200;
    }
    else
    {
        correct = rand() % 20;
    }

    cout << "You get " << guesses << " guesses. \n";
    
    for(int guessesLeft = guesses; guessesLeft > 0; guessesLeft --){
        cout << "Guess a number...";

        int guess;
        cin >> guess;
        if (guess == correct)
        {
            return true;
        }
        else if (guess < correct)
        {
            cout << "Your guess is low\n";
        }
        else
        {
            cout << "Guess is too high\n";
        }
        cout << "You have " << guessesLeft-1 << " guesses left. \n";
    }
    return false;
}