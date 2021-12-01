
#include "header.h"

int binarySearch(Account* arr, int l, int r, char x[20])
{

    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (strcmp(arr[mid].name,x)==0)
            return mid;
        if (strcmp(arr[mid].name,x)>0)
            return binarySearch(arr, l, mid - 1, x);
        return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}

void acc_by_name(char name[20])
{

   
	Account* sort=(Account*)malloc(sizeof(Account)*MaxLen);
    sort=startPtr;
	qsort(sort,Last+1,sizeof(Account),cmpstr);
	int i=binarySearch(sort,0,Last,name);
	if(i==-1)
	{
		printf("Name not in record\n");
	}
	else
	{
		 printf("\e[1;1H\e[2J");
         printf("\n----------WELCOME TO IIIT BANK----------\n\n");

         printf("A/C no\tName\tSurname\tDOB\tAge\tMobile No\tAccount Type\n");
		 printf("%d\t%s\t%s\t%d\t%d\t%ld\t%s\n",startPtr[i].AccountNo,startPtr[i].name,startPtr[i].surname,startPtr[i].DOB,startPtr[i].Age,startPtr[i].MobileNo,(startPtr[i].TOA==1) ? "Saving" : "Current");
        

	}
	delay(3000);

}