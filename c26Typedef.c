#include<stdio.h>
typedef struct student{ // {iske andar ki cheez is be like previous name}
    int id;
    int marks;
    char fav_char;
    char name[34];
}std; // std is the new name

int main(){
    // int *ptr1,ptr2;
    typedef int* intpointer;
    intpointer a,b;
    int c = 89;
    a = &c;
    b = &c;
    // std s1,s2;
    // s1.id = 56;
    // s2.id = 89;
    // printf("Value of s1's id is %d\n",s1.id);
    // printf("Value of s2's id is %d\n",s2.id);
    // typedef <previous_name> <alias_name>;
    /*
    typedef unsigned long ul;
    typedef int integer;
    ul l1,l2,l3;
    integer a = 4;
    printf("Value of a is %d",a);
    */
    
    return 0;
}