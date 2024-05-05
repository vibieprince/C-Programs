#include<stdio.h>
int main()
{
    int i;
    int age;
    for(i=0;i<10;i++){
        printf("%d\nEnter your age\n",i);
        scanf("%d",&age);
        if(age>10){
            break; // jis loop ke andar ho bss waha se wapas aaoge
        }
    }
    return 0;
}