#include<iostream>
# define SIZE 5
using namespace std;

int main()
{
    int a = 10;
    int A[SIZE] = {10,20,30,40,50};
    int * p = &a; // referencing or initialisation of the pointer variable 
    // pointer variable is also be avail in "Stack portion of main memory"
    int *P = A; // or int *P = A;



    cout<<*p<<" "<<a<<endl;
    cout<<"Address of the pointer variable:"<<a<<endl;

    for(int i=0;i<SIZE;i++)
    {
        cout<<A[i]<<" ";
        
    }



}
