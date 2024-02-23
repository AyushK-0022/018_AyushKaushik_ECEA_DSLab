#include <iostream>
int binarySearch(int arr[], int length, int y, int x)
{
    while (y <= length)
    {
        int mid = y + (length - y) / 2;
        if (arr[mid] == x)
        {
            return mid;
        }
        if (arr[mid] < x)
        {
            return binarySearch(arr, length, mid+1, x);
        }
        else
        {
            return binarySearch(arr, mid-1, 0, x);
        }
    }
    return -1;
}
int main()
{
    int size, key;

    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    int myArray[size];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++)
    {
        std::cin >> myArray[i];
    }
    std::cout << "The entered array is: ";
    for (int i = 0; i < size; i++)
    {
        printf("%d ", myArray[i]);
    }

    printf("\nEnter the element to be searched in the array: ");
    scanf("%d", &key);

    int result = binarySearch(myArray, size-1, 0, key);
    if (result == -1)
    {
        printf("The element is not in the array.");
    }
    else
    {
        printf("The element is at %dth indices of the array.", result);
    }
    return 0;
}