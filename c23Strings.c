#include<stdio.h>
void printstr(char str[]){
    int i=0;
    while(str[i] != '\0'){
        printf("%c",str[i]);
        i++;
    }
    // printf("\n");
}
int main(){
    // char str[] = {'P','r','i','n','c','e'};  // returns a garbage character at the end
    // char str[] = {'P','r','i','n','c','e','\0'}; // also null terminated character array
    // char str[] = "Prince"; // null terminated character array
    char str[34];
    gets(str);
    // scanf se aap white spaces input nhi le payenge is liye strings ke cases mein aap gets ka istemaal karein
    printf("Using custom function printstr\n");
    // printstr(str);
    printf("Using printf %s\n",str);
    puts("using puts :\n");
    puts(str);
    return 0;
}