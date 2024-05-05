#include<stdio.h>
#include<stdlib.h>
int sum = 34;
int functionDangling()
{
    int a,b,sum1;
    a = 34;
    b = 364;
    sum1 = a + b;
    return &sum1;
}
int main1(){
    // CASE 1 : De allocation of a memory block
    int *ptr = (int *) malloc(7*sizeof(int));
    ptr[0] = 34;
    ptr[1] = 26;
    ptr[2] = 52;
    ptr[3] = 4;
    free(ptr); // ptr is now a dangling pointer

    // CASE 2 : Function returning local vaariable address
    int * dangPtr = functionDangling(); // ye ek aisi memory ko point kar raha hai jo already delete ho chuka hai (ab ye ek Dangling Pointer hai)

    int * danglingPtr3;
    // CASE 3 : If a variable goes out of scope
    {
        int a = 12;
        danglingPtr3 = &a;
    }
    // Here variable goes out of scope i.e it is deleted which means danglingPtr3 is pointing to a location which is free and hence danglingPtr 3 is now a dangling Pointer.    
    return 0;
}