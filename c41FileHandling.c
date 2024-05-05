#include<stdio.h>
int main(){
    FILE *ptr = NULL;
    ptr = fopen("c40Myfiles.txt","a+");


    // ------------ FGETC---------------
    // char c = fgetc(ptr);
    // printf("The character i read was %c\n", c);

    // c = fgetc(ptr);
    // printf("The character i read was %c\n", c);


    // ----------------FGETS---------------------
    // char str[34];
    // fgets(str,8,ptr);
    // printf("The string is %s\n",str);

    fputc('c',ptr);
    fputs("This is Prince",ptr);

    fclose(ptr);
    return 0;
}