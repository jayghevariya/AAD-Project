#include "header.h"

void mainprompt()           // Main Prompt Onto Screen
{
    printf("\e[1;1H\e[2J");
    printf("\n----------WELCOME TO IIIT BANK----------\n\n");
    printf("1. Create an Account\n2. Deposite Funds\n3. Withdraw Funds\n4. Check Balance\n5. All Account Holders Detail\n6. Close Account\n7. Modify Account\n8. Choose Bank Manager Option\n9. Home Banking Salesman\n10. Exit\n\nEnter Recpective Number to Select an Option....\n");
}

void prompt2()
{
    printf("\e[1;1H\e[2J");
    printf("\n----------WELCOME TO IIIT BANK----------\n\n");
    printf("1. Sorting\n2. Searching \n3. Exit\n\nEnter Recpective Number to Select an Option....\n");
}