#include "header.h"

void sorts()
{
    Account* sort=(Account*)malloc(sizeof(Account)*MaxLen);
    sort=startPtr;
    int a;
    printf("\e[1;1H\e[2J");

    printf("\n----------WELCOME TO IIIT BANK----------\n\n");
    printf("How You Want to Sort\n1. By A/C no \n2. By Age\n3. By Name\n4. Exit \n\n");
    scanf("%d",&a);
    
    
    if (a==1)
    {
        mergeSort(sort,0,Last);
        print(sort);
    }else if(a==2)
    {
        mergeSort_age(sort,0,Last);
        print(sort);
    }else if(a==3){
        
        sort_by_name();
    }
    else
    {
        exit(0);
    }
    
}