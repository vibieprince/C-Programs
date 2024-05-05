#include<stdio.h>
int main(){
    // printf("Hello world\n");
    // int i,j;
    // for(i=0,j=0;i<5;i++){
    //     printf("%d %d\n",i,j);
    // }
    /*
    int i=0,j=0;
    for (; j=3,i<5;i++)
    {
        printf("%d %d\n",i,j);
        j++;
    }
    */
    printf("Hello world\n");
    int i,j=0;
    for(i=0;i<5;){
        printf("%d %d\n",i,j);
        i++,j++;
    }
    return 0;
}