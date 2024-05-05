#include<stdio.h>
int main(){
    FILE *ptr = NULL;
    char string[64] = "This content was produced by c39FileIOFunctions.c";

    // ----------- Reading a file -------------- 
    // ptr = fopen("c40Myfiles.txt","r");
    // fscanf(ptr,"%s",string);
    // printf("The content of this file has %s\n",string);

    // ----------- Writing a file --------------
    // ptr = fopen("c40Myfiles.txt","a");
    ptr = fopen("c40Myfiles.txt","w");
    fprintf(ptr,"%s",string);
    return 0;
}