#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a = 345;
    float b = 8.3;
    void *ptr;
    
    ptr = &b;
    printf("The value of a is %f \n", *((float *)ptr));

    ptr = &a;
    printf("The value of a is %d \n", *((int *)ptr));

    return 0;

}