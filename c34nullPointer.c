#include<stdio.h>
int main(){
    int a =34;
    int*ptr = &a; // koi gurantee nhi h ki ek uninitialised pointer NULL ko point karey ya phir kisi specific address ko point karey. isiliye hamein safe side rehne ke liye pointer ko NULL kardena chahiye agar hum usko dereference karne wale hain aane wale time mein too!
    // int*ptr = NULL; //0
    if(ptr != NULL)
    printf("The adress of a is %d\n",*ptr);
    else{
    printf("The pointer is a null pointer and cannot be dereferenced"); //34
    }
    return 0;
}