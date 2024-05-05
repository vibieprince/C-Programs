#include<stdio.h>
#define PI 3.14
int main(){
    int a = 8;
    const float b = 7.333;
    // PI = 7.33; Cannot do this because PI is a constant
    // printf("tab character \t \t my backslash \\n %f",PI);
    // printf("tab character \a %f",PI); // a beeps a sound, however it's not working on my system
    // b = 7.22; // Returns an error because b is assigned as constant in above line
    // printf("Hello World\n");
    // printf("The value of a is %d and the value of b is %2.4f\n", a,b);
    // printf("%8.4f\n",b);
    // printf("%-18.4f  thisss",b);
    return 0;
}