// STACK implementation using the ARRAY

// STACK -- is a linear data structure where the insertion(push) and deletion(pop) takes place at one 
// end --> that is LAST IN FIRST OUT(LIFO)

// STACK--> have the operations like the push,pop,isempty,isfull,display etc

// ALgortithm : have top variable  with invalid index so that we can insert the value at right index

// Step1: define macro that fix size, take array globally,then proceed for the operations

#include<stdio.h>
#include<stdlib.h>

#define SIZE 5

int stack_arr[SIZE];
int TOP = -1;

int  isFUll()
{
    if(TOP == (SIZE-1))
    {
        return 1;
    }
    else{
        return 0;
    }
}

int isEmpty()
{
    if(TOP == -1)
    {
        return 1;
    }
    return 0;
}

void push(int data)
{
    // First step is to check the limit of the array size so go for the extreme condition
    if(isFUll())
    {
        printf("STACK overflow");
        return ;
    }
    // Now after checking the overflow condition -- increment the TOP variable
    TOP += 1;
    stack_arr[TOP] = data; // inserting the data at the index
    
}

// POP from the stack 
int  pop()
{
    // extreme condition is if STACK is empty we cant delete or pop
    if(isEmpty())
    {
        printf("STACK UNDERFLOW");
        exit(1); // abnormal termination of the program
    }
    // first store the element and decrement and return that pop value
    int value;
    value = stack_arr[TOP];
    TOP -= 1;
    return value;
}

// Top most element 
int Peek()
{
    if(isEmpty())
    {
        printf("STACK UNDERFLOW");
        exit(1);
    }
    return stack_arr[TOP];
}

void display()
{
    // check for the empty condition
    if(TOP== -1)
    {
        printf("STACK UNDERFLOW OR STACK IS EMPTY");
        return;
    }
    // iterate over the stack and print
    for(int i=TOP;i >= 0;i--)
    {
        printf("%d ",stack_arr[i]);
    }
}
int main()
{ 
   int choice, data;
   // create the infinite loop 
   while(1)
   {
     printf("\n");
     printf("1. PUSH\n");
     printf("2. POP\n");
     printf("3. Print the topmost element\n");
     printf("4. Print all the elements of the stack\n");
     printf("5. Quit");
     printf("\n");

     //enter the choice
     printf("Enter the choice: ");
     scanf("%d",&choice);

     // Switch case to match the choice given by the user 
     switch(choice)
     {
        case 1:

     }
   }

   // switch function so that we can enter the choice

}