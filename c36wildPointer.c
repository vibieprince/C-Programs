#include<stdio.h>
#include<stdlib.h>
int main(){
    int a = 4334;
    int*ptr; // a Wild pointer
    // *ptr = 34; // This is not a good thing to do
    ptr = &a; // ptr is no longer a wild pointer
    printf("The value of a is %d\n",*ptr);
    return 0;
}