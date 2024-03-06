#include <stdio.h>

int main()
{
    // Request values from the user
    int i;
    int j;
    printf("Please enter initialization value: ");
    scanf("%d", &i);

    printf("Please enter termination value: ");
    scanf("%d", &j);

    /*Check if the i is greater or less than j
    Prints incrementally or otherwise*/ 
    
    if (i < j)
    { 
        for (i; i <= j; i++)
        {
            printf("%d\n", i);
        }
    }
    else
    {
        for (i; i >= j; i--)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}