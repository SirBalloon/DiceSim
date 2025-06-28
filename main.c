#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Main file

// Random Number Generator function
int randNumGen(){ 
    // Generated Seed
    srand(time(NULL));
    // Generate and return random dice roll
    int minNum = 1;
    int maxNum = 6;

    int randNum = (rand() % (maxNum-minNum)+ 1) + minNum;
    return randNum;
}

void waitFunc(int Time){
    clock_t start_time = clock();
    while (clock() < start_time + Time){
        printf("waiting for next roll\n\n");
    };
}

// Main Function 
int main(){
    // Defining variables
    int choiceNum = 1;
    int DiceRoll = 0;
    int EndTime;

    while(choiceNum != 2){
        // Menu text
        int currentTime = clock();
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
            EndTime = clock();
            if (difftime(EndTime, currentTime) <= 250){
                printf("Rolling dice too fast\n\n");
                waitFunc(10);
                break;
            }else{
                DiceRoll = randNumGen();
                printf("You rolled a %d\n\n", DiceRoll);
            }
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
