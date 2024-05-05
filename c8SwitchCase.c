#include<stdio.h>
int main(){
    int age,marks;
    printf("Enter your age\n");
    scanf("%d",&age);

    printf("Enter your marks\n");
    scanf("%d",&marks);
    // Rules for switch statements 
    // 1. Switch expression must be an int or char
    // 2. Case value must be an integer or a character
    // 3. Case must come inside Switch
    // 4. Break is not a must
    switch(age){
        case 1:
        printf("The age is 1\n");
        switch(marks){
            case 45:
            printf("Your marks are 45\n");
            break;

            default:
            printf("You marks are not 45\n");
        }
        break;

        
        case 3:
        printf("The age is 3\n");
        break;

        case 13:
        printf("the age is 13\n");
        break;

        default:
        printf("Age is not 1,3 and 13");
        break;
    }
    return 0;
}