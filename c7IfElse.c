#include <stdio.h>
int main(){
    int age;
    printf("Enter your age\n");
    scanf("%d",&age);
    printf("You have entered %d as your age\n",age);
    if(age>18){
        printf("You can vote");
    }
    else if(age>10){
        printf("You are betweeen 10 and 18 so you can vote as a kid");
    }
    else{
        printf("You can't vote");
    }
    return 0;
}
// Quiz : Maths,science,pass = 45 wala gift
    //    Science = 15 wala gift
    //    Maths = 15 wala gift

    //    print the type of gift you are giving to them