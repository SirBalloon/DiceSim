#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

//Main file

// Random Number Generator function
int randNumGen(){ 
    // Generate and return random dice roll
    int minNum = 1;
    int maxNum = 6;

    int randNum = (rand() % (maxNum-minNum)+ 1) + minNum;
    return randNum;
}

void waitFunc(int CurrentTime){
    time_t start_time = time(NULL);
    int DifferenceT = start_time - CurrentTime;
    int ConditionT = (CurrentTime + DifferenceT) + 2;
    while (CurrentTime <= ConditionT){
        int TimeLeft = (start_time - CurrentTime) + 2;
        CurrentTime += 1.0;
        printf("%d seconds left before next possible roll.\n\n", TimeLeft);
    };
}

// Main Function 
int main(){
    // Defining variables
    srand(time(NULL));
    int choiceNum = 1;
    int DiceRoll = 0;
    double elapsedTime;

    while(choiceNum != 2){
        // Menu text
        printf("Welcome to DiceSim! Your very own roll a dice simulator\n");
        printf("Press 1 to roll the dice.\t");
        printf("Press 2 to close the program. \n\n");
        // Gathers user input
        time_t StartTime = time(NULL);
        scanf("%d", &choiceNum);
        // Switch statement to ensure options available with function 
        time_t currentTime;
        switch (choiceNum)
        {
        case 1:
            // Rolls Dice
            currentTime = time(NULL);
            elapsedTime = difftime(currentTime, StartTime);
            if(elapsedTime > 1.0){
                DiceRoll = randNumGen();
                printf("You rolled a %d\n\n", DiceRoll);
            }
            else{
                currentTime = time(NULL);
                printf("Rolling dice too fast\n\n");
                waitFunc(currentTime);
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
