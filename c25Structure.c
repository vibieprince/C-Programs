#include<stdio.h>
#include<string.h>
struct student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
} harry,ravi,shubham; //as simple as that
// struct student harry,ravi,shubham;
void print(){
    printf("%s",harry.name);
}
int main(){
    harry.id = 1;
    ravi.id = 2;
    shubham.id = 3;
    ravi.marks = 355;
    harry.marks = 456;
    shubham.marks = 563;
    ravi.fav_char = 'p';
    harry.fav_char = 'p';
    shubham.fav_char = 'p';
    strcpy(harry.name,"harry potter student of the year");
    strcpy(shubham.name,"Shubham kumar");
    // printf("Harry got %d marks\n",harry.marks);
    // printf("Harry's name is : %s\n",harry.name);
    
    // printf("Shubham got %d marks\n",harry.marks);
    // printf("Shubham's name is : %s\n",shubham.name);

    print();
    // Quick Quiz : Print information of a given student
}