#include <stdio.h>
#include <stdlib.h>
void linear_search(int size, int arr[])
{
    int s, result = 0;
    printf("Enter the element to be searched: ");
    scanf("%d", &s);
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == s)
        {
            result = i;
        }
    }

    if (result != 0)
    {
        printf("The element is at %d indices", result);
    }
    else
    {
        printf("The element is not in the array.");
    }
}
void array_reverse(int size, int arr[])
{
    for (int i = 0; i < size / 2; i++)
    {
        int b;
        b = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = b;
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}
void array_updation(int size, int arr[])
{
    for (int i = 0; i < size; i++)
    {
        if (i % 2 == 0)
        {
            arr[i] = arr[i] * 2;
        }
        else
        {
            arr[i] = arr[i] + 5;
        }
    }

    printf("The updated array is: ");

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}
int array_insertion(int size, int arr[])
{
    int n;
    printf("\nEnter the position at which number is to be inserted: ");
    scanf("%d", &n);

    for (int i = size + 1; i >= n; i--)
    {
        {
            arr[i] = arr[i - 1];
        }
    }

    printf("\nEnter the element to be inserted: ");
    scanf("%d", &arr[n]);

    for (int i = 0; i < size + 1; i++)
    {
        printf("%d ", arr[i]);
    }
    return size = size + 1;
}
int array_deletion(int size, int arr[])
{
    int d;
    printf("\n\nEnter the position of element to be deleted: ");
    scanf("%d", &d);

    for (int i = d; i < size; i++)
    {
        arr[i] = arr[i + 1];
    }
    for (int i = 0; i < size - 1; i++)
    {
        printf("%d ", arr[i]);
    }
    return size - 1;
}
void array_sorting(int size, int arr[])
{
    int min;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[i])
            {
                min = arr[j];
                arr[j] = arr[i];
                arr[i] = min;
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    int size, key;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int *myArray = (int *)malloc(size * sizeof(int32_t));
    if (myArray == NULL)
    {
        printf("The array has not been generated.");
    }
    else
    {
        printf("Enter the elements of the array: ");
    }
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &myArray[i]);
    }
    printf("The entered array is: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", myArray[i]);
    }

    while (1)
    {
        printf("\n\nPress a number form 1 to 7 for the following operations: \n Press 1 to search an element in array\n Press 2 for reversing the array\n");
        printf(" Press 3 for Updating the element of the array\n Press 4 for Inserting an element\n Press 5 for Deleting an element\n Press 6 for Sorting the array");
        printf("\n Press 7 to Exit the program: ");
        scanf("%d", &key);
        switch (key)
        {
        case 1:
            linear_search(size, myArray);
            break;
        case 2:
            array_reverse(size, myArray);
            break;
        case 3:
            array_updation(size, myArray);
            break;
        case 4:
            size = array_insertion(size, myArray);
            break;
        case 5:
            size = array_deletion(size, myArray);
            break;
        case 6:
            array_sorting(size, myArray);
            break;
        case 7:
            goto exit;
            break;
        default:
            printf("\nInvalid Input!....Re-enter the Command: ");
            break;
        }
    }
    exit:
    return 0;
}