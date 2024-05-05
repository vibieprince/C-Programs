#include<stdio.h>
int main(){
    int marks[2][4] = {{45,234,67,85},{45,76,4,78}};
    // for(int i=0; i < 4; i++){
    //     printf("Enter the value of %d element of the array \n",i);
    //     scanf("%d ",&marks[i]);
    // }
    for (int i = 0; i< 2; i++){
        for (int j = 0; j < 4; j++)
        {
        // printf("The value of %d,%d element of the array is %d\n",i,j,marks[i][j]);
        printf("%d ",marks[i][j]);
        }
        printf("\n");
    }
    // marks[0] = 34;
    // printf("Marks of student 1 is %d\n",marks[0]);
    // marks[0] = 24;
    // marks[1] = 74;
    // marks[2] = 21;
    // marks[3] = 22;
    // printf("Marks of student 1 is %d\n",marks[0]);
    return 0;
}