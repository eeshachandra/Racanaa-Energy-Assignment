#include <stdio.h>

void swap(int *varA,int *varB)
{
    *varA = *varA + *varB;
    *varB = *varA - *varB;
    *varA = *varA - *varB;
}

int main()
{
    int varA = 10, varB = 20; //Declaration and initialization of two variables.

    printf("Before swapping: varA = %d and varB = %d \n",varA,varB);
    swap(&varA,&varB);
    printf("Before swapping: varA = %d and varB = %d \n",varA,varB);

    return 0;
}
