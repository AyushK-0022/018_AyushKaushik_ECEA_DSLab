#include <stdio.h>
int binarySearch(int array[], int length, int y, int x)
{
    while (y <= length)
    {
        int mid = y + (length - y) / 2;
        if (x == array[mid])
        {
            return mid;
        }
        if (x > array[mid])
        {
            return binarySearch(array, length, mid + 1, x);
        }
        else
        {
            return binarySearch(array, mid - 1, 0, x);
        }
    }
    return -1;
}
int main()
{
    int size;
    int x;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int myArray[size];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &myArray[i]);
    }

    printf("The enetered array is: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", myArray[i]);
    }

    printf("\nEnter the element to be searched in the array: ");
    scanf("%d", &x);

    int result = binarySearch(myArray, size-1, 0, x);

    if (result == -1)
    {
        printf("The element is not in the array.");
    }
    else
    {
        printf("The element is at the %dth indices of the array.", result);
    }
    return 0;
}