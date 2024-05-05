#include<stdio.h>
void changevalue(int *address){
    *address = 345;
}
int main(){
    int a = 34,b=56;
    printf("The value of a now is %d\n",a);
    changevalue(&a);
    printf("The value of a now is %d\n",a);
    return 0;
}

// Quick Quiz : Given two numbers, add them subtract them and then assign them to a and b using call by reference.
// a = 4
// b = 3

// after running the function, the values of a and b should be:
// a = 7
// b = 1