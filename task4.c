// Задача 4. Два одинаковых

#include <stdio.h>

int Input(int arr[], int n);
int Same(int a[], int size);

int main()
{
    enum
    {
        SIZE = 10
    };
    int in[SIZE];
    printf("Enter 10 numbers, programm find equals: ");
    Input(in, SIZE);
    printf(Same(in, SIZE) == 1 ? "YES"
                               : "NO");
    return 0;
}

int Input(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    return i;
}
int Same(int a[], int size)
{
    for (int i = 0; i < size; i++)
        for (int j = i + 1; j < size;
             j++)
            if (a[i] == a[j])
                return 1;
    return 0;
}