#include<stdio.h>

int main()
{
    int a[10] = {1, 2};
    int *aP;
    int i;
    aP = a;

    for(i = 0 ; i<10; i++);
    {
        printf("The address and value of element %d is %p and %d", i, aP+i, *(aP+i));
    }

    return 0;
}
