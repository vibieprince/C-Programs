#include<stdio.h>
#include<stdlib.h>

int main(){
    // Use of MALLOC
    // int n;
    // int *ptr;
    // printf("Enter the size of array you want to make\n");
    // scanf("%d",&n);
    // ptr = (int*) malloc(n*sizeof(int));
    // for(int i=0 ; i<n;i++){
    //     printf("Enter the value no %d of this array \n",i);
    //     scanf("%d",&ptr[i]);
    // }

    // for(int i=0 ; i<n;i++){
    //     printf("The value at %d of this array is %d\n",i,ptr[i]);
    // }

    // Use of CALLOC
    int n;
    int *ptr;
    printf("Enter the size of array you want to make\n");
    scanf("%d",&n);
    ptr = (int*) calloc(n,sizeof(int));
    for(int i=0 ; i<n;i++){
        printf("Enter the value no %d of this array \n",i);
        scanf("%d",&ptr[i]);
    } //agar 0 se initialise ni karna too calloc matt hee use karo

    for(int i=0 ; i<n;i++){
        printf("The value at %d of this array is %d\n",i,ptr[i]);
    }

    // Use of Realloc
    printf("Enter the size of new array you want to make\n");
    scanf("%d",&n);
    ptr = (int*) realloc(ptr, n*sizeof(int));
    for(int i=0 ; i<n;i++){
        printf("Enter the value no %d of this array \n",i);
        scanf("%d",&ptr[i]);
    }

    for(int i=0 ; i<n;i++){
        printf("The value at %d of this array is %d\n",i,ptr[i]);
    }
    free(ptr);
    
    return 0;
}