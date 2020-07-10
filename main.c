#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
    printf("\n");
    time_t t;
    srand((unsigned)time(&t));
    int n = 20;
    int arr[n];
    int temp;
    for (temp = 0; temp <= n; temp++)
    {
        arr[temp] = rand() % 100;
    }

    for (temp = 0; temp <= n; temp++)
    {
        printf("%d, ", arr[temp]);
    }
    printf("\n\n");

    printf("\n");
    return 0;
}