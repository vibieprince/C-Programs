#include <stdio.h> // --- helps us to use scanf
int main(int args, char const*argv[]){
    int a,b;

    // C is case sensitive
    // keywords constant identifier string literal symbols
    printf("Enter the number a\n");
    scanf("%d",&a); // scanf helps us to get the input

    printf("Enter the number b\n");
    scanf("%d",&b);

    printf("Your added number is %d\n",a+b);
    return 0;

    // Flow of C program 
    // Preprocessing > Compilation > Assembly > Linking > Loading 
}