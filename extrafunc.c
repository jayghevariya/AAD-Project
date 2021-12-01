#include "header.h"

void decidePoint()
{
    if (MinimumACnoStart!=NULL)
    {
         Point=MinimumACnoStart->number;
         MinimumACnoStart=MinimumACnoStart->next;
    }else
    {
        Point=Last+1;
        Last++;
    }
}

void SetMinimumACno(int num)
{
    MinimumACno* temp=(MinimumACno*)malloc(sizeof(MinimumACno));
    temp->number=num;
    temp->next=NULL;
    MinimumACnoPoint=(MinimumACno*)malloc(sizeof(MinimumACno));
    MinimumACnoPoint->next=MinimumACnoStart;
    if (MinimumACnoStart==NULL)
    {

        MinimumACnoStart=temp;
    }else if (MinimumACnoStart->next==NULL)
    {

        if (MinimumACnoStart->number > temp->number)
        {
            temp->next=MinimumACnoStart;
            MinimumACnoStart=temp;
        }else
        {
            temp->next=MinimumACnoStart->next;
            MinimumACnoStart->next=temp;
        }
        
    }
    else
    {
        if (MinimumACnoStart->number > temp->number)
        {
            temp->next=MinimumACnoStart;
            MinimumACnoStart=temp;
        }
        
        
        while (MinimumACnoPoint->next!=NULL)
        {
            
            if (MinimumACnoPoint->next->number > temp->number)
            {
                
                temp->next=MinimumACnoPoint->next;
                MinimumACnoPoint->next=temp;

                break;
            }
            MinimumACnoPoint=MinimumACnoPoint->next;
        }
        if (MinimumACnoPoint->next==NULL)
        {

            temp->next=MinimumACnoPoint->next;
            MinimumACnoPoint->next=temp;
        }
        
    }


    
}

void managerOption()
{
    int Sec;
    prompt2();
    scanf("%d",&Sec);
    managerselection(Sec);
}

void print(Account* ab)
{
    printf("\e[1;1H\e[2J");
    printf("\n----------WELCOME TO IIIT BANK----------\n\n");

    printf("A/C no\tName\tSurname\tDOB\tAge\tMobile No\tAccount Type\n");
    for (ll i = 0; i < Last+1 ; i++)
    {
        if (ab[i].Act_ID==1)
            printf("%d\t%s\t%s\t%d\t%d\t%ld\t%s\n",ab[i].AccountNo,ab[i].name,ab[i].surname,ab[i].DOB,ab[i].Age,ab[i].MobileNo,(ab[i].TOA==1) ? "Saving" : "Current");
        
        
    }

    delay(5000);

}









int cmpstr(const void *v1,const void *v2)
{
  
 
    Account* a1=(Account*) v1;
    Account* a2=(Account*) v2;
    return strcmp(a1->name,a2->name);


}

void sort_by_name()
{
	Account* sort=(Account*)malloc(sizeof(Account)*MaxLen);
    sort=startPtr;
	qsort(sort,Last+1,sizeof(Account),cmpstr);
	print(sort);
}

