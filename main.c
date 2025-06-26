#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
    int DiceRoll = randNumGen();
    //Output
    printf("You rolled a %d\n", DiceRoll);
    return 0; 
}
