#include "header.h"

void CreateAccount()
{
    char tem[4];
    printf("\e[1;1H\e[2J");
    printf("\n----------WELCOME TO IIIT BANK----------\n\n");


    Account temp;


    printf("Enter Your Name:-");
        scanf("%s",temp.name);

    // printf("Enter Your Surname:-");
    //     scanf("%s",temp.surname);

    // printf("Enter Your Age:-");
    //     scanf("%d",&temp.Age);

    // printf("Enter Your Date of Birth in ddmmyyyy:-");
    //     scanf("%d",&temp.DOB);

    // printf("Enter Your Mobile Number:-");
    //     scanf("%ld",&temp.MobileNo);

    // printf("What Type Of Account You Want to Open.\nPress 1 for Saving or Press 2 for Current:-");
    //     scanf("%d",&temp.TOA);

    // printf("Do You Want ATM card? (yes/no):-");
    //     scanf("%s",tem);
    //     if (strcmp(tem,"yes")==0)
    //     {
    //         temp.ATM=1;
    //     }else
    //     {
    //         temp.ATM=0;
    //     }

    // printf("Do You Want Cheque Book? (yes/no):-");
    //     scanf("%s",tem);
    //     if (strcmp(tem,"yes")==0)
    //     {
    //         temp.Cheque=1;
    //     }else
    //     {
    //         temp.Cheque=0;
    //     }

    // printf("How much Amount you want to deposite now:-");
    //     scanf("%lld",&temp.money);
    decidePoint();
    if (Point==MaxLen)
    {
        startPtr=(Account*)realloc(startPtr,MaxLen*sizeof(Account)*2);
        MaxLen=MaxLen*2;
    }
    
    temp.AccountNo=Point;
    temp.Act_ID=1;
    startPtr[Point]=temp;
    
    delay(500);
    printf("\e[1;1H\e[2J");
    printf("Your Account Number is :- %d",Point);
    
    
    delay(1000);
}

void DepositeFunds()
{
    printf("\e[1;1H\e[2J");
    printf("\n----------WELCOME TO IIIT BANK----------\n\n");
    ll deposit;
    ll AcNo;
    printf("Enter your Account Number:");
    scanf("%lld",&AcNo);
 


    if (startPtr[AcNo].Act_ID==1)
    {
        printf("\e[1;1H\e[2J");
        printf("Enter Amount for Deposite:");
        scanf("%lld",&deposit);
        startPtr[AcNo].money += deposit;
        printf("Sucessfull.....");
    }
    else
    {
        printf("\e[1;1H\e[2J");
        printf("Invalid Account Number.....");
    }
    delay(1000);
}

void WithdrawFunds()
{
    printf("\e[1;1H\e[2J");
    printf("\n----------WELCOME TO IIIT BANK----------\n\n");
    ll deposit;
    ll AcNo;
    printf("Enter your Account Number:");
    scanf("%lld",&AcNo);
    

    if (startPtr[AcNo].Act_ID==1)
    {
        printf("\e[1;1H\e[2J");
        printf("Enter Amount for Withdraw:");
        scanf("%lld",&deposit);
        printf("\e[1;1H\e[2J");
        Min_Notes(deposit);
        startPtr[AcNo].money -= deposit;
        printf("Sucessfull.....");
    }
    else
    {
        printf("\e[1;1H\e[2J");
        printf("Invalid Account Number.....");
    }


    delay(1000);

}

void CheckBalance()
{
    printf("\e[1;1H\e[2J");
    printf("\n----------WELCOME TO IIIT BANK----------\n\n");

    ll AcNo;
    printf("Enter your Account Number:");
    scanf("%lld",&AcNo);
    if (startPtr[AcNo].Act_ID==1)
    {
        printf("\e[1;1H\e[2J");
        printf("Your Account Balance is %lld\n",startPtr[AcNo].money);
    }
    else
    {
        printf("\e[1;1H\e[2J");
        printf("Invalid Account Number.....");
    }
    
    
    delay(1000);
  
}

void AllAccountHoldersDetail()
{
    printf("\e[1;1H\e[2J");
    printf("\n----------WELCOME TO IIIT BANK----------\n\n");

    printf("A/C no\tName\tSurname\tDOB\tAge\tMobile No\tAccount Type\n");
    for (ll i = 0; i < MaxLen ; i++)
    {
        if (startPtr[i].Act_ID==1)
        {
            printf("%d\t%s\t%s\t%d\t%d\t%ld\t%s\n",startPtr[i].AccountNo,startPtr[i].name,startPtr[i].surname,startPtr[i].DOB,startPtr[i].Age,startPtr[i].MobileNo,(startPtr[i].TOA==1) ? "Saving" : "Current");
        }
        
    }
    delay(3000);
}

void CloseAccount()
{
    printf("\e[1;1H\e[2J");
    printf("\n----------WELCOME TO IIIT BANK----------\n\n");  

    ll AcNo;
    printf("Enter your Account Number:");
    scanf("%lld",&AcNo);

    if (startPtr[AcNo].Act_ID==1)
    {
        startPtr[AcNo].Act_ID=0;
    }
    else
    {
        printf("Account Already Deleted!");
    }
    SetMinimumACno(AcNo);
    delay(1000);


}

void ModifyAccount()
{
    

}



