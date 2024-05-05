// Similar to structures
#include<stdio.h>
#include<string.h>
// struct student{
//     int id;
//     int marks;
//     char fav_char;
//     char name[34];
// };

// But when will change struct to union 
union student{
    int id;
    int marks;
    char fav_char;
    char name[34];
};

int main(){
    // struct student s1;
    // s1.id = 1;
    // s1.marks = 45;
    // s1.fav_char = 'p';
    // strcpy(s1.name,"Harry");

    // printf("The id is %d\n",s1.id); // ----> 1
    // printf("The marks is %d\n",s1.marks); // ----> 45
    // printf("The fav_char is %c\n",s1.fav_char); // ----> p
    // printf("The name is %s\n",s1.name); // ----> Harry

    // But when we will change struct to union 
    union student s1;
    s1.marks = 45;
    s1.fav_char = 'p';
    strcpy(s1.name,"Harry");
    s1.id = 1;

    printf("The id is %d\n",s1.id);  
    printf("The marks is %d\n",s1.marks);  
    printf("The fav_char is %c\n",s1.fav_char);  
    printf("The name is %s\n",s1.name);  
}