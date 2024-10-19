#include <iostream>
#include <string>
#include <cstdlib>
#include "game.h"
using namespace std;


int main()
{
    // cout << true; // boolean literal
    // cout << "true"; //string literal
    cout << "Do you want to play a game? (y/n)";
    char response = tolower(getchar()); // Y
    // char responseFiltered = tolower(response); //y
    // int response;
    // cin >> response;
    // char r = static_cast<char>(response); //Convert int 'response' to char to display as a char
    // cout << "You entered: " << response << endl;
    // cout << "You entered: " << r << endl;
    cout << "You entered: " << char(response) << endl;
    // if(tolower(response) == 'y') //yes
    if (response == 'y') // yes
    {
        cout << "Let's play a game, then...\n";
        cout << "Have you beat the game? \n0: no. \n1:yes.\n";
        bool beatGame;
        cin >> beatGame;
        bool won;
        if (beatGame)
        {
            cout << "Because you beat the game you can play impossible mode.\n";
            won = playGame(1);
        }
        else
        {
            cout << "What Difficulty?:";
            cout << " \n0: easy";
            cout << " \n1: medium";
            cout << "\n2:hard\n ";
            int difficulty;
            cin >> difficulty;

            switch (difficulty)
            {
            case 0: // easy
                won = playGame(10);
                break;
            case 1: // medium
                won = playGame(5);
                break;
            case 2: // hard
                won = playGame(3);
                break;
            default:
                cout << "Don't understand";
                break;
            }
            //    if(difficulty == "easy" || difficulty == "medium" || difficulty == "hard") {
            //         cout << "Respawning";
            //    }
            //    else if(difficulty == "impossible" && beatGame){
            //     cout << "LOL good luck\n";
            //    } else if (difficultdy == "impossible" && !beatGame){
            //     cout << "You have to beat the game at least once.";
            //    }
        }
        if (won)
        {
            cout << "Congratz";
        }
        else
        {
            cout << "You lost, Try again";
        }
    }
    else if (response == 'n')
    {
        cout << "Maybe next time. Goodbye .\n";
    }
    else
    {
        cout << "I don't understand. \n";
    }
    // system("pause");
    return 0;
}
