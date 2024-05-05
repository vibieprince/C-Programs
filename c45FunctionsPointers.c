#include<stdio.h>
int sum(int a,int b){
    return a + b;
}
void greet(){
    printf("Hello world my user good morning%d\n");
}
int main(){
    printf("The sum of 1 and 2 is %d\n",sum(1,2)); //Testing the functions
    int (*fptr)(int,int); // Declaring a function pointer | ek aisa function jo int deta hai aur do int leta hai waise function ko point karega mera *fptr
    fptr = &sum; // Creating a function pointer
    int d = (*fptr)(4,6); // Dereferencing a function pointer
    printf("The value of d is %d\n",d);
    return 0;
}    
