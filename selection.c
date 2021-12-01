#include "header.h"

void firstselection(int a)          // Selection Funtions
{
    switch (a)
    {
    case 1:
        CreateAccount();
        break;
    case 2:
        DepositeFunds();
        break;
    case 3:
        WithdrawFunds();
        break;
    case 4:
        CheckBalance();
        break;
    case 5:
        AllAccountHoldersDetail();
        break;
    case 6:
        CloseAccount();
        break;
    case 7:
        ModifyAccount();
        break;
    case 8:
        managerOption();
        break;
    case 9:
    {
        int n;
        printf("How many City He has to visit:");
        scanf("%d",&n);
        travel(n);
        break;
    }
    case 10:
        exit(1);
        break;
   
    
    default:
        break;
    }
    
}

void managerselection(int a)
{
    switch (a)
    {
    case 1:
        sorts();
        break;
    case 2:
    {
        printf("\e[1;1H\e[2J");
        printf("\n----------WELCOME TO IIIT BANK----------\n\n");
        char name[20];
        scanf("%s",name);
        acc_by_name(name);
        break;
    }
    case 3:
        exit(1);
        break;
    
    default:
        break;
    }
}