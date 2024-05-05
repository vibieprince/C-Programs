#include<stdio.h>
// #include"c32Extern.c"
// int sum = 897; // Here's sum global variable
int func1(int a,int b){
    // auto int sum = a+b;
    // int sum; returns a garbage value
    // extern int sum;
    static int myVar;
    myVar++;
    printf("The sum is %d\n",myVar);
    // myVar = a+b;
    return myVar;
}
// int sum = 98;
int main(){
    // Declaration - Telling the compiler about the variable (No space reserved)
    // Definition - Declaration (Space reservaton)
    // int sum = func1(3,5); // yaha humne sum naam ka local variable banaya hai
    // register 
    int myVar = func1(3,5); //1
    myVar = func1(3,5); //2
    myVar = func1(3,5); //3
    myVar = func1(3,5); //4
    // printf("The sum is %d\n",myVar);
    return 0;
}