#include <stdio.h>
int b = 34; // Global Variable

int read(){
    return 43+4;
}
int func1(int b1)
{
    // int loc = 89;
    static int myvar; // Static variable khud 0 se initialise hote hain
    // static int myvar = read; // Raises error kyunki Static variable kabhi kisi function ko call ni karta bss wo ek constant hee mangta hai
    printf("The value of myvar is %d\n", myvar);
    myvar++;
    // printf("The value of b inside func1 is %d\n",b);
    // printf("The address of b inside func1 us %d\n",&b);
    // return b1 = 10;
    return b1 = myvar;
}
int main()
{
    int b = 344; // Local Variable
    // printf("%d",loc); // Raises error because loc is local variable of func1
    // printf("The address of b inside main  is %d\n",&b);
    int val = func1(b);
    val *func1(b);
    val *func1(b);
    val *func1(b);
    val *func1(b);
    val *func1(b);
    int *ptr = &val;
    // printf("The value of func1 is %d",val);
    return 0;
}