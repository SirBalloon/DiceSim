#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Main file

// Random Number Generator function
int randNumGen(){ 
    srand(time(NULL));
    int randNum = rand() % 6 + 1;
    return randNum;
}
// Main Function 
int main(){
    //Calculations
    int choiceNum = 1;
    int DiceRoll = 0;

    while(choiceNum != 2){
        printf("Welcome to DiceSim! Your very own roll a dice simulator\n");
        printf("Press 1 to roll the dice.\t");
        printf("Press 2 to close the program. \n\n");

        scanf("%d", &choiceNum);
        switch (choiceNum)
        {
        case 1:
            DiceRoll = randNumGen();
            printf("You rolled a %d\n\n", DiceRoll);
            break;
        case 2:
            printf("DiceSim turned OFF\n");
            return 0;
        default:
            printf("Option Choice Invalid\n\n");
            continue;
        }
    }
}
