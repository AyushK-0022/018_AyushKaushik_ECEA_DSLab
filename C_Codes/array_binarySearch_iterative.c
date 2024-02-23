#include <stdio.h>
int binarySearch(int arr[], int l, int size, int x)
{

    while (l <= size)
    {
        int m = l + (size - l) / 2;
        if (arr[m] == x)
            return m;

        if (arr[m] < x)
            l = m + 1;
        else
            size = m - 1;
    }
    return -1;
}
int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int x;
    printf("The entered array is: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nEnter the element to be searched in the array: ");
    scanf("%d", &x);
    int value = binarySearch(arr, 0, size-1, x);
    (value == -1) ? printf("Element is not present in array")
                  : printf("Element is present at index %d", value);
    return 0;
}
