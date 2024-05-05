#include<stdio.h>
#include<string.h>

int main(){
    // char str[] = "Prince";
    // char str1[] = "Krishna";
    // char str2[34];
    // printf("\nThe strcmp for str,str1 returned %d",strcmp(str,str1)); //You cant expect ASCII difference
    // puts(strcat(str,str1)); // ---> PrinceKrishna

    // printf("The length of str is %d\n",strlen(str));
    // printf("The length of str1 is %d\n",strlen(str1));

    // printf("The reversed string str is : ");
    // puts(strrev(str));
    // printf("The reversed string str1 is : ");
    // puts(strrev(str1));

    // strcpy(str2,strcat(str,str1));
    // puts(str2);

    // Quick Quiz : Allow user to enter two string and then concentrate them by saying that str is a friend of str1
    char str[34];
    printf("Enter the name of friend 1 :\n");
    gets(str);
    char str1[34];
    printf("Enter the name of friend 2 :\n");
    gets(str1);

    puts(str);
    printf("is friend of ");
    puts(str1);
    return 0;
}