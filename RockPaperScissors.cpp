#include <bits/stdc++.h>

using namespace std;
/**
 * @file RockPaperScissors.cpp
 *
 * @brief Simple Rock Paper Scissors game in cpp
 *
 * @author Colin C
 *
 */


int main(){
    // Welcome User
    cout << "Welcome to the classic game Rock Paper Scissors!" << endl;
    
    // Encapsulate entire game into while loop so it can be repeated
    bool done = false;
    while (done == false){
        
        // Getting the Input from the User
        string acceptedValues[3] =  {"Rock", "Paper", "Scissors"};
        

        // Validating User input
        string userMove;
        bool validInput = false;
        while (validInput == false){
            cout << "Please input your move (First letter Capitalized): ";
            cin >> userMove;

            for (int i = 0; i < 3; i++){
                
                if (userMove == acceptedValues[i]){
                    validInput = true;
                }
                if (i == 2 && validInput == false){
                cout << "Invalid Input!" << endl;
                }
                
            }
            
        }

        // Generate computer Move
        srand(time(0));
        int randomNUM = rand()%(3);
        string computerMove = acceptedValues[randomNUM];

        // Iterate through game possibilies
        string Winner;
        
        if (userMove == "Rock" && computerMove == "Scissors"){
            Winner = "You won!";
        } else if (userMove == "Rock" && computerMove == "Paper"){
            Winner = "The Computer won!";
        } else if (userMove == "Paper" && computerMove == "Rock"){
            Winner = "You won!";
        } else if (userMove == "Paper" && computerMove == "Scissors"){
            Winner = "The Computer won!";
        } else if (userMove == "Scissors" && computerMove == "Paper"){
            Winner = "You won!";
        } else if (userMove ==  "Scissors" && computerMove == "Rock"){
            Winner = "The Computer won!";
        } else if (userMove == computerMove){
            Winner = "You both tied";
        }

        // Output who the winner is
        cout << "You chose " << userMove << " and The Computer chose " << computerMove << ", " << Winner << endl;

        // Ask the user to play again
        string endGameChoice;
        cout << "Would you like to play again? ";
        cin >> endGameChoice;

        if (endGameChoice == "yes" || endGameChoice == "Yes" || endGameChoice == "y"){
            cout << "Awesome!" << endl;
        } else{
            cout << "Thanks for playing!" << endl;
            done = true;
        }

    }
}