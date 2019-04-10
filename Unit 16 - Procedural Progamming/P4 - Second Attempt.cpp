/*
    Description: Adventure Game
    Author: Ethan O'Hara
    Copyright: © Ethan O'Hara, All Rights Reserved.
*/

//--- Include Libaries
#include "stdafx.h"
#include <iostream>
#include <string>
#include "Windows.h"

//--- Program Functions
void PrintIntro();
int ManageInput();
void Level1();
void Level2();
void Level4();
void Level3();
void CheckLives();
void Help();
void Win();
void Lose();
void End();

//--- Global Variables
int PlayerInput = 0;
int points = 0;
int lives = 3;
bool PlayerAlive = true;
char checker;
std::string PlayerName;

//--- Main Program
int main()
{
    //--- Introduce The Details
    std::cout << "©Ethan OHara, Adventure Game, V1.02 \t" << std::endl;
    
    //--- System
    Sleep(3500);
    system("cls");
    system("color 53");

    //--- Get Name
    std::cout << "What is your name" << std::endl;
    std::getline(std::cin, PlayerName);
    std::cout << "Welcome " << PlayerName << " to the game. Loading in ";
    int load = 10;

    for (load; load > 0; load--)
    {
        Sleep(500);
        std::cout << load << ", ";
    }


    //--- Introduce The Game
    PrintIntro();

    //--- Error Check
    if (PlayerInput > 3) 
    {
        PrintIntro();
    }   
    return 0;
}

//--- Print Intro
void PrintIntro()
{
    bool BackToMenu = false;
    do {

    //--- Clear Screen
    system("cls");

    //--- Introduce the game
    std::cout << "Main Menu – Adventure Game." << std::endl;
    std::cout << "------------------------------------------" << std::endl;
    std::cout << "1. Text Adventure Game (Circumvent)" << std::endl;
    std::cout << "2. Help" << std::endl;
    std::cout << "3. Exit" << std::endl;
    std::cout << "------------------------------------------" << std::endl;
    std::cout << "Please enter 1, 2 or 3 to Exit :" << std::endl;
    ManageInput();
    
    } while (!BackToMenu);

}

int ManageInput()
{
    std::cin >> PlayerInput;
    
    switch (PlayerInput)
    {
        case 1: 
            Level1();
            break;
        case 2: 
            Help();
            break;
        case 3:
            exit(true);
            break;
    }
    return PlayerInput;
}


void Help() 
{   
        system("cls");
        std::cout << "XaFlaForo – Help Page" << std::endl;

        Sleep(2000);
        std::cout << "-- BRIEF EXPLANATION ---" << std::endl;
        std::cout << "You are someone going through a cave who needs to use his wit to get around" << std::endl;

        Sleep(2000);
        std::cout << "-- THE CONTROLS ---" << std::endl;
        std::cout << "‘n’ or ‘N’ to move North, ‘s’ or ‘S’ to move South" << std::endl;
        std::cout << "‘l’ or ‘I’ to use the lantern" << std::endl;
        std::cout << "‘d’ or ‘D’ to use the dagger." << std::endl;
        std::cout << "1. to move West, 2. to move East" << std::endl;
Sleep(4000);
    //--- Back To Menu
    PrintIntro();

}

void CheckLives()
{
    if (lives == 0)
    {
        std::cout << "You lost the game";
    }
    else
    {
        return;
    }
}

void Win()
{
    points++;
    return;
    std::cout << "Correct. You slaied the beast. You gained a point." << std::endl;
}

void Lose()
{
    lives--;
    std::cout << "Incorecct. You did not slay the beast. You lose a life." << std::endl;
    return;
}

void Level1()
{

    //--- Local Variable
    int Level1Input = 0;

    //--- Level 1
    std::cout << "You come across the ice monster you have 2 weapons" << std::endl;
    std::cout << "flamethrower" << std::endl;
    std::cout << "freze ray" << std::endl;
    std::cout << "Press 1 for flamethrower" << std::endl;
    std::cout << "Any other key for  freze ray" << std::endl;

    //--- Level 1 Manage Input
    std::cin >> Level1Input;
    if (Level1Input == 1)
    {
        CheckLives();
        Win();
    }
    else
    {
        CheckLives();
        Lose();
    }
    
    std::cout << std::endl << "To continue to Level 2 " << std::endl;
    system("PAUSE");
    Level2();
}

void Level2() 
{
    //--- Local Variable
    int level2Input = 0;

    //--- Level 2
    std::cout << "You come across the lava monster you have 2 weapons" << std::endl;
    std::cout << "flamethrower" << std::endl;
    std::cout << "freze ray" << std::endl;
    std::cout << "Press 1 for flamethrower" << std::endl;
    std::cout << "Any other key for freze ray" << std::endl;

    //--- Level 2 Manage Input
    std::cin >> level2Input;
    if (level2Input == 2)
    {
        CheckLives();
        Win();
    }
    else
    {
        CheckLives();
        Lose();
    }

    std::cout << std::endl << "To continue to Level 3 " << std::endl;
    system("PAUSE");
    Level3();
}

void Level3() {
    //--- Local Variable
    int level3Input = 0;

    //--- Level 3
    std::cout << "You come across the storm monster you have 2 weapons" << std::endl;
    std::cout << "flamethrower" << std::endl;
    std::cout << "freze ray" << std::endl;
    std::cout << "Press 1 for flamethrower" << std::endl;
    std::cout << "Any other key for freze ray" << std::endl;

    //--- Level 3 Manage Input
    std::cin >> level3Input;
    if (level3Input == 1)
    {
        CheckLives();
        Win();
    }
    else
    {
        CheckLives();
        Lose();
    }

    std::cout << std::endl << "To continue to Level 4 " << std::endl;
    system("PAUSE");
    Level4();
}

void Level4() {
    //--- Local Variable
    int level4Input = 0;

    //--- Level 4
    std::cout << "You come across the lava monster you have 2 weapons" << std::endl;
    std::cout << "flamethrower" << std::endl;
    std::cout << "freze ray" << std::endl;
    std::cout << "Press 1 for flamethrower" << std::endl;
    std::cout << "Any other key for freze ray" << std::endl;

    //--- Level 3 Manage Input
    std::cin >> level4Input;
    if (level4Input == 2)
    {
        CheckLives();
        Win();
    }
    else
    {
        CheckLives();
        Lose();
    }

    std::cout << std::endl << "To find out how you did " << std::endl;
    system("PAUSE");
    End();
}

void End()
{
    std::cout << "You have completed the game. I hope you enjoyes" << std::endl;
    std::cout << "You came out with: " << points << " points " << std::endl;
    std::cout << "And You came out with: " << lives << " lives " << std::endl;
    std::cout << std::endl << "To go back to the menu " << std::endl;
    system("PAUSE");

}
