// Functions large program ko chhote choote tukdo mein baat dete hain!
// Function can be called many times to provide reusability of our c program
// Types of functions - Library and user defined
#include<stdio.h>
// With argument and with return value
int sum(int a,int b){
    return a + b;
}

// With argument and without return value
void printstar(int n){
    for(int i = 0; i<n;i++){
    printf("%c ",'*');
    }
}

// Without argument and with return value
int take(){
    int i;
    printf("Enter the number\n");
    scanf("%d",&i);
    return i;
}

// Without argument without return value
int main(){
    int a,b,c;
    a = 9;
    b = 87;
    // c = sum(a,b);
    c = take();
    // printf("The sum is %d",c);
    // printstar(7);
    printf("The number entered  is %d\n",c);
    return 0;
}