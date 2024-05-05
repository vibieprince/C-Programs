#include<stdio.h>
int sum(int a,int b){
    return a + b;
}
void greetHelloAndExeccute(int (*fptr)(int,int)){
    printf("Hello World\n");
    printf("The sumof 5 and 7 is %d\n",fptr(5,7));
}
void geetGmAndExecute(int(*fptr)(int,int)){
    printf("Good mornig user\n");
    printf("The sum of 5 and 7 is %d\n",fptr(5,7));
}
int main(){
    int (*ptr)(int,int);
    ptr = sum;
    greetHelloAndExeccute(ptr);
    // geetGmAndExecute(ptr);
    return 0;
}