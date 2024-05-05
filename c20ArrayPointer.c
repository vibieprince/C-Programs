#include<stdio.h>
int main(){
    // char a = '3';
    // char *ptra = &a;
    // printf("%p\n",ptra+2);
    // ptra++;
    // printf("%p\n",ptra++);
    // printf("%p",ptra-2);
    int arr[] = {1,2,3,4,5,6,7,8};
    int *arrayptr = arr;
    printf("Value at position 3 of the Array is %d\n",arr[3]);
    printf("The address of first element of the array is %d\n",&arr[0]); // Same address 1
    printf("The address of first element of the array is %d\n",arr); // Same address 1
    printf("The address of second element of the array is %d\n",&arr[1]); // Same address 2
    printf("The address of second element of the array is %d\n\n\n",arr + 1); // Same address 2
    // arr++; //Gives error

    printf("The value at address of first element of the array is %d\n",*(&arr[0])); // Same Value 1
    printf("The value at address of first element of the array is %d\n",arr[0]); // Same Value 1
    printf("The value at address of first element of the array is %d\n",*(arr)); // Same Value 1
    printf("The value at address of second element of the array is %d\n",*(&arr[1])); // Same Value 2
    printf("The value at address of second element of the array is %d\n",arr[1]); // Same Value 2
    printf("The value at address of second element of the array is %d\n",*(arr + 1)); // Same value 2
    return 0; 
}