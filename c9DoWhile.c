#include<stdio.h>
int main(){
    int num,index = 0;
    printf("Enter a number\n");
    scanf("%d",&num);
    printf("Here are the numbers from 0 to %d ",num);
    do{
        printf("%d\n",index);
        index = index + 1;
    }
    while(index<num+1);
    return 0;
}