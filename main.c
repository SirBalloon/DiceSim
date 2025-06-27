#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Main file

// Random Number Generator function
int randNumGen(){ 
    // Generated Seed
    srand(time(NULL));
    // Generate and return random dice roll
    int randNum = rand() % 6 + 1;
    return randNum;
}
// Main Function 
int main(){
    // Defining variables
    int choiceNum = 1;
    int DiceRoll = 0;

    while(choiceNum != 2){
        // Menu text
        printf("Welcome to DiceSim! Your very own roll a dice simulator\n");
        printf("Press 1 to roll the dice.\t");
        printf("Press 2 to close the program. \n\n");
        // Gathers user input
        scanf("%d", &choiceNum);
        // Switch statement to ensure options available with function 
        switch (choiceNum)
        {
        case 1:
            // Rolls Dice
            DiceRoll = randNumGen();
            printf("You rolled a %d\n\n", DiceRoll);
            break;
        case 2:
            // Quits Program
            printf("DiceSim turned OFF\n");
            return 0;
        default:
            // Ensures every other option is rendered invalid
            printf("Option Choice Invalid\n\n");
            continue;
        }
    }
}
