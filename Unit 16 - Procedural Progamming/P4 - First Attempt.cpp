/*
 FileName: main.cpp
 Desciption: AdventureGame

 Created by Ethan OHara on 21/01/2019.
 Copyright © 2019 Ethan OHara. All rights reserved.
*/

//--- Includes
#include <iostream>
#include <string>
#include <ctime>

//--- Functions
void MainMenu();
void Help();
void Exit();
void Level();
int GetInput();
void Win();
void Lose();

//--- Temp Var
int points = 0;

//--- Global Variables
class Variables
{
    //--- Define Variables
    public:
    
    //--- Intergers
    int Age = 0;
    int UserInput = 0;
    
    //--- Strings
    std::string Name = "";
};

//--- Time Function
void DisplayDate() {
    time_t currenttimeanddate = time(0);
    std::cout << ctime(&currenttimeanddate) << std::endl;
}

//--- Main Code
int main(int argc, const char * argv[]) {
    
    //--- Allow Global Variables
    Variables Variable, Level1 ,Level2, Level3, Level4;
    
    //--- Load Menu
    MainMenu();
    
    //--- Get Input
    std::cin >> Variable.UserInput;
    
    //--- Switch Statement
    switch(Variable.UserInput) {
        case 1 : ; //--- Just Break To Continue
            break;
        case 2 : Help(); //--- Help
            break;
        case 3 : Exit();
            break;
    }
    
    //--- Get Name
    std::cout << "What is your name" << std::endl;
    std::cin >> Variable.Name;
    
    //--- Get Age
    std::cout << "What is your age " << std::endl;
    std::cin >> Variable.Age;
    
    //--- Start
    std::cout << "Welcome  " << Variable.Name << "Aged  1" << Variable.Age << "Your begin your adventure now at ";
    DisplayDate();
    
    //--- Level 1
    std::cout << "You come across the ice monster you have 2 weapons a flamethrower and a freze ray what do you use " << std::endl;
    std::cout << "Press 1 for flamethrower" << std::endl;
    std::cout << "Any other key for  freze ray" << std::endl;
    
    //--- Level 1 Manage Input
    std::cin >> Level1.UserInput;
    if (Level1.UserInput == 1)
    {
        Win();
    }
    else
    {
         Lose();
    }
    
    //--- Level 2
    std::cout << "You come across the Lava Hound you have 2 weapons a flamethrower and a freze ray what do you use " << std::endl;
    std::cout << "Press 1 for flamethrower" << std::endl;
    std::cout << "Any other key for  freze ray" << std::endl;
    
    //--- Level 2 Manage Input
    std::cin >> Level2.UserInput;
    if (Level2.UserInput == 2)
    {
        Win();
    }
    else
    {
         Lose();
    }
    
    //--- Level 3
    std::cout << "You come across the Bedrock Monster you have 2 weapons a flamethrower and a freze ray what do you use " << std::endl;
    std::cout << "Press 1 for flamethrower" << std::endl;
    std::cout << "Any other key for  freze ray" << std::endl;
    
    //--- Level 3 Manage Input
    std::cin >> Level3.UserInput;
    if (Level3.UserInput == 2)
    {
        Win();
    }
    else
    {
         Lose();
    }
    
    //--- Level 4
    std::cout << "You come across Bigfoot you have 2 weapons a flamethrower and a freze ray what do you use " << std::endl;
    std::cout << "Press 1 for flamethrower" << std::endl;
    std::cout << "Any other key for  freze ray" << std::endl;
    
    //--- Level 4 Manage Input
    std::cin >> Level4.UserInput;
    if (Level4.UserInput == 3)
    {
        Win();
    }
    else
    {
        Lose();
    }
    
    
    //--- Retiurn
    return 0;
}

void Win() {
    
    std::cout << "Correct – You gain a point" << std::endl;
    points = points + 1;
    std::cout << "Total points are: " << points << std::endl;
    return;
}

void Lose() {
    std::cout << "Incorrect – You get nothing" << std::endl;
    return;
}

void MainMenu() {
    
    std::cout << "Main Menu – Adventure Game" << std::endl;
    std::cout << "------------------------------" << std::endl;
    std::cout << "1. Play XaFlaForo Escapes" << std::endl;
    std::cout << "2. Help" << std::endl;
    std::cout << "3. Exit" << std::endl;
    std::cout << "-------------------------------" << std::endl;
    std::cout << "Please enter 1, 2 or 3 to Exit:" << std::endl;
    
    return;

}

void Help() {
    std::cout << "XaFlaForo – Help Page" << std::endl;
    std::cout << "-- COMMON QUESTION AND HOW TO ANSWER" << std::endl;
    std::cout << "‘n’ or ‘N’ to move North, ‘s’ or ‘S’ to move South" << std::endl;
    std::cout << "‘l’ or ‘I’ to use the lantern" << std::endl;
    std::cout << "‘d’ or ‘D’ to use the dagger." << std::endl;
    std::cout << "1. to move West, 2. to move East" << std::endl;
    
    //--- Local Variable
    std::string HelpInput;
    
    //--- Handle Input
    std::cout << "Press p to play the game or any other key to exit" << std::endl;
    
    std::cin >> HelpInput;
    
    //--- Choose
    if (HelpInput == "p")
    {
       return;
   }
   else
   {
       Exit();
   }
}

void Exit() {
    exit(0);
}
