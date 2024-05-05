#include<stdio.h>
// Typecasting is just conversion of one data type into another data type
int main(){
    int a=3;
    // float b = 54;
    // float b = (float)54/5;
    float b = 54/5;
    printf("The value of a is %d\n",a);
    // printf("The value of b is %f\n",b);
    printf("The value of b is %d\n",(int) b);
    return 0;
}