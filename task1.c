// Задача 1. Сортировка по возрастанию

#include <stdio.h>

int Input(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    return i;
}

void BubbleSort(int arr[], int n)
{
    int i = 0;
    int j = 0;
    int temp = 0;
    for (i = 0; i < n; ++i)
    {
        for (j = i; j < n; ++j)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}