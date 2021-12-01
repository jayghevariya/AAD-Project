#include "header.h"

void Min_Notes(int amount)
{
    int notes[9] = { 2000, 500, 200, 100,
                     50, 20, 10 ,5,1};
    int array[9];
    for (int i = 0; i < 9; i++)
    {
        array[i]=0;
    }
    
     
    for (int i = 0; i < 9; i++) {
        if (amount >= notes[i]) {
            array[i] = amount / notes[i];
            amount = amount - array[i] * notes[i];
        }
    }
    printf("\e[1;1H\e[2J");

    printf("Your Money Is Here:\n");
    for (int i = 0; i < 9; i++) {
        if (array[i] != 0) {
            printf("%d : %d\n",notes[i],array[i]);
        }
    }
}
