// Null pointer is a general purpose pointer
#include<stdio.h>
int main(){
    int a = 345;
    float b = 8.3;
    void *ptr;
    // ptr = &a;
    ptr = &b;
    // printf("The value of a is %d\n",*((int *)ptr)); //345
    printf("The value of b is %f\n",*((float *)ptr)); // 8.300000
    return 0;
}
 