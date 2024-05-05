#include <stdio.h>
int main(){
    int a,b;
    a = 2;
    b = 0;
    printf("%d\n",a == b);
    printf("%d\n",a && b);
    printf("%d\n",a & b);
    printf("%d\n",a || b);
    printf("%d",!b);
    return 0;
}