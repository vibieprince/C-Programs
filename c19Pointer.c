#include<stdio.h>
int main(){
    // Pointer ek data type hai jo address ko store karta hai
    printf("Lets learn about pointers\n");
    int a = 76;
    int* ptra = &a;
    int* ptra2 = NULL;
    printf("The address of pointer to a is %p\n",&ptra);
    printf("The address of a is %p\n",&a);
    printf("The address of a is %p\n",ptra);
    printf("The address of some gabage is %p\n",ptra2);
    printf("The value of a is %d\n",*ptra); // Pointer dereferencing
    printf("The value of a is %d\n",a);
    return 0;
}