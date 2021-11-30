# BANK MANAGEMENT SYSTEM
 
## Overview :-
Bank Management is based on the concept of creating and storing customer’s account details.
Here the user can perform all the tasks like creating an account, deposit amount, withdraw
amount, check balance, view all account holders detail, close an account and modify an
account.

Talking about the features of the Bank Management, a user can create an account by providing
the name of the account holder, select amount type whether it’s a Saving account or Current
account, and providing an initial amount. The account number is auto-generated. Then the user
can also deposit and withdraw money just by providing his/her account, then the system
displays his/her profile and entering an amount. For certain purposes, he/she can also check
for the balance inquiry which displays the account holder’s name with account number type
and amount. He/she can also check for all the account holder’s lists. Another feature is that the
user can also close their account by providing their account number and he/she can modify
their account detail and type if they want to.

## Features :-
1. Create an account
2. Deposit Funds
3. Withdraw Funds
4. Check Balance
5. View all account holder’s detail
6. Close an account
7. Modify an account
8. Manager Option

## Manager Option :-
### 2 Algorithms -
1. Merge Sort ( Example of Divide And Conquer ) ( O(nlogn) )
- By Age
- By A/C no
- By Name
2. Binary Search ( O(nlogn) )
- Just Providing Name If It Is exist Then Show All Detailes.


## Some Implementation :-
### Less Memory 
- if user execute code first time then we have global variable ```startPtr``` which has only 2 index.
- if 2 index full then we allocate double of 2. it means 4.
- so on 2,4,8,16 .....
- ``` Just by Using malloc and realloc ```

### Minimum Number of A/C no
- If there is 10 A/C holders and suddenly A/C_No=2 closes their account then if new user come he will automatically allocate A/C no=2. not A/C no=11.
- Time Complexity O(1).
- ``` Using Linked List ```

### On Delete Operation
- I have to include that A/C no in linked list for future create A/C.
- it takes O(n) in worst case.

### Withdraw Money
- At this Time I implimented minimum Currency Problem With ATM.
- here i have 2000,500,200,100,50,20,10,5,1 in currency. and it gives that solution which uses minimum number of currencys.
- ``` It is Greedy Method ```
