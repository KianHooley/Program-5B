#include <iostream>
using namespace std;
int main()
{
    int playerGuess = 0;
    int guessCount = 0;
    bool gameOver = 0;
    unsigned int seedTime = static_cast<unsigned int>(time(NULL));
    srand(seedTime);
    int myNumber = rand() % 10;
    myNumber++;
    cout << "Guess the correct door.\n";
    cin >> playerGuess;
    cout << "Let me see you answer..." << playerGuess << ".\n";
    while (!gameOver)
    {
         if (playerGuess < myNumber)
    {
        cout << "Oh...You are wrong... maybe a glitch in the code.\n";
    }
    else if (playerGuess > myNumber)
    {
        cout << "Wrong? I thought the game was easy... wait it is you just have... very bad luck.\n";
    }
    else
    {
        cout << "correct! See thats not so hard.\n";
        if (!gameOver);
    }
    cout << "DO IT AGAIN\n";
    cin >> playerGuess;
    return 0;
    }
    cout << "Here's what the correct door was " << myNumber << " \n";
    cout << "It took you about " << guessCount << " guesses \n";
}
