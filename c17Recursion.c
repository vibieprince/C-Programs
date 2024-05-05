#include<stdio.h>
// By recursive approach
/*
int factorial(int num){
    if(num ==1 || num == 0){
        return 1;
    }
    else{
        return (num * factorial(num - 1));
    }
}
*/
int main(){
    int i,factorial=1,n;
    printf("Enter the number whose fatorial you want :\n");
    scanf("%d",&n);

    // By Recursive approach
    // printf("The factorial of %d is %d\n",n,factorial(n));

    // By iterative approach
    for(i=1; i<=n; i++){
        factorial = factorial*i;
    }
    printf("Factorial of %d is %d",n,factorial);
    return 0;
}