/* Including All Headers File */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <time.h>


/* TYPEDEF */

typedef long long int ll;

/* Structure For Detail of Accounts */
typedef struct Account
{
    int Act_ID;                         // if 1 it means account is active
    int AccountNo;                      // This is Randomly Generated Which is Always Minimum Possible Number
    char name[20];
    char surname[20];
    int DOB;                            // Formate ddmmyyyy
    int Age;
    long int MobileNo;
    int TOA;                            // TOA= Type of Account where 1=Saving 2=Current
    int ATM;                            // (0 for no) and (1 for yes)
    int Cheque;
    ll money;
} Account;

/* Initialize Storing Element */
Account* startPtr;                      // Array to Store Customers
int MaxLen;                             // Max Possible Customers
int Point;                              // This is point to next position for customer
int Last;                               // Storing Largest Ac No

typedef struct MinimumACno              // Liknked List for getting Minimum AC no 
{
    int number;
    struct MinimumACno* next;
} MinimumACno;

MinimumACno* MinimumACnoStart;          // Pointing First element of LL
MinimumACno* MinimumACnoEnd;            // Pointing Last Element of LL
MinimumACno* MinimumACnoPoint;          // Pointing Next Element of LL

int** cost;
int** dp;

/* Declaring Prompt Functions */
void mainprompt();
void prompt2();

/* Declaring Selection Functions */
void delay(int);
void firstselection(int);
void managerselection(int);
void CreateAccount();
void DepositeFunds();
void WithdrawFunds();
void CheckBalance();
void AllAccountHoldersDetail();
void CloseAccount();
void ModifyAccount();
void decidePoint();
void managerOption();

void print(Account*);

/* Setting MinimumAC qu */
void SetMinimumACno(int);


/* Manager Devloper Func */
void sorts();

/* Divide & Conqurer */
void mergeSort(Account arr[], int, int);
void mergeSort_age(Account arr[], int, int);
void merge(Account arr[], int l, int m, int r);
void merge_age(Account arr[], int l, int m, int r);


/* Min Notes */

void Min_Notes(int amount);


void travel(int city);
int tsp(int mask,int pos,int city,int ALL_VISIT);
int min(int a,int b);


int cmpstr(const void *v1,const void *v2);
void acc_by_name(char name[20]);
int binarySearch(Account* arr, int l, int r, char x[20]);
void sort_by_name();