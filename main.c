#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <unistd.h>

int qSort(int arr[], int low, int high);
int part(int arr[], int low, int high);
int uslee(useconds_t useconds);

int main()
{
    printf("Unsorted list:\n");
    printf("\n");
    time_t t;
    srand((unsigned)time(&t));
    int n = 60;
    int arr[n];
    int temp;
    for (temp = 0; temp <= n; temp++)
    {
        arr[temp] = rand() % 100;
    }
    for (temp = 0; temp <= n; temp++)
    {
        printf("%d ", arr[temp]);
    }
    printf("\n\nSorted list: \n\n");
    qSort(arr, 0, n);

    printf("\n\n");
    return 0;
}

int qSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = part(arr, low, high);
        qSort(arr, low, pi - 1);
        qSort(arr, pi + 1, high);
    }
}

int part(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);
    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            int tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;

            for (int temp = 0; temp <= high; temp++)
            {
                printf("%d ", arr[temp]);
            }
            printf("\r");
            fflush(stdout);
            usleep(40000);
        }
    }
    int tmp = arr[high];
    arr[high] = arr[i + 1];
    arr[i + 1] = tmp;
    return (i + 1);
}
