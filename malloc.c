#include <stdio.h>
#include <stdlib.h>
int main()
{
    // Use of malloc
    int *ptr;
    int n;
    printf("Enter the size of the array you want to create\n");
    scanf("%d", &n);
    ptr = (int *)malloc(10 * sizeof(int));

    for (int i = 0; i < 3; i++)
    {
        printf("Enter the value no. %d of this array\n", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("Enter the value no. %d of this array %d\n", i,ptr[i]);
        // scanf("%d", &ptr[i]);
    }

    return 0;
}
