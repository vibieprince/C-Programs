#include<stdio.h>
#include<stdlib.h>
int main(){
    int a,i =0;
    int *i2;
    while(i<4555){
        printf("Welcome to Code With Prince\n");
        i2 = malloc(34444*sizeof(int));
        if(i%100==0){
            getchar();
        }
        i++;
        free(i2);
    }
    return 0;
}