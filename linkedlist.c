#include<stdio.h>
#include<stdlib.h>

// create the self referential structure 
struct Node
{
    int data;
    struct Node* link;
};

// create global head 
struct Node * head = NULL;


// create the function definition for the insertion at front end 
void insertatfront(int value)
{
    // create the node 
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    
    // ptr --> memory allocation check 
    if (ptr ==NULL)
    {
        printf("Overflow\n");
    }
    else
    {
        // memory created 
        // check the head is null or not 
        if (head == NULL)
        {
            // that linked list empty 
            ptr->data = value;
            ptr->link = head;
            head = ptr;
        }
        else
        {
            // that linked list not empty
            ptr->data = value;
            ptr->link = head;
            head = ptr;
            
        }
        
    }
}

// function definition for the insertion at back or rear end
void insertatback(int value)
{
    // create the node by using the malloc
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));

    // memory check 
    if(ptr == NULL)
    {
        printf("Overflow\n");
    }
    else
    {
        // we need to create temp pointer for traversing 
        struct Node* temp = head;
        while(temp->link != NULL)
        {
            temp = temp->link;
        }
        ptr->data = value;
        ptr->link = temp->link;
        temp->link = ptr;
    }
}

// create the function definition for the insertion at given position 
void insertatposition(int value, int position)
{
    // create the node 
    int i=0;
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));

    // memory check 
    if(ptr== NULL)
    {
        printf("Overflow\n");
    }
    else
    {
        // two temporary pointer -- prev and next 
        struct Node* next = head;
        struct Node* prev = NULL;

// if i = 0 ; at the position :: (postion-1)
// if i=0; after  the position:: (position)
// if i=0; before the position::(position-2)
        while(i < (position-2))
        {
            prev = next;
            next = next->link;

            i++;
           
        }

        ptr->data = value;
        ptr->link = prev->link;
        prev->link = ptr;

    }
}
// create the function display the linked list nodes 
void display()
{
    // head check is null or not  
    if(head == NULL)
    {
        printf("List is empty\n");
    }
    
    else
    {
        // to traverse we need to take the pointer that act as dummy head
        struct Node* temp = head;
        while (temp != NULL)
        {
            printf("%d->",temp->data);
            temp = temp->link;
        }
    }
}
// create the function call 
int main()
{
    // function call for the insertion of node at front
    insertatfront(40);
    insertatfront(30);
    insertatfront(20);
    insertatfront(10);
    
    // function call for the display
    printf("Display the linked list as follows by insertion at frontend:\n");
    display();
    printf("\n");

    // function call for the function insertion at the rear end
    insertatback(50);
    insertatback(60);
    insertatback(70);
    insertatback(80);
    
    // print the elements 
    printf("Display the linked list after insertion at back:\n");
    display();
    printf("\n");

    // Insert at the given position in linked list 
    insertatposition(0,4);
    printf("Display the linked list after insertion at given position:\n");
     
    display();
    printf("\n");


    return 0;
}