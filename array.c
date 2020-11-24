#include<stdio.h>

int main(){
    long scoredOne[] = {121, 123, 265, 1231, 321};

    //modified the vulue 
    scoredOne[2] = 2500;
    scoredOne[4] = 3500;

    for (int i = 0; i < 5; i++){
        printf("%ld\n", scoredOne[i]);
    }

    long scoredTwo[5];

    //user input system!!!!!

    for(int i = 0; i < 6; i++) {
        printf("Enter number of index %d: ", i);
        scanf("%ld", &scoredTwo[i]);
    }

    puts("Printing elements of scoredTwo: ");
    for (int i = 0; i < 5; i++){
        printf("%ld\n", scoredTwo[i]);
    }


    return 0;
}