// Write a menu driven program to input an array and perform array operations:
// 1. Traversal- Linear Search for an element in the array
// 2. String Reversal
// 3. Updating the element of the array- multiply the elements at even indices by 2 and add 5 to odd indices elements
// 4. Inserting an element at the specified position
// 5. Deleting an element from the specified position
// 6. Sorting the array- Bubble sort

#include <stdio.h>
void linear_search(int size, int arr[])
{
    int s;
    printf("Enter the element to be searched: ");
    scanf("%d", &s);
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == s)
        {
            printf("The element is at %d indices", i);
        }
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
    return size = size - 1;
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
    int t;
    int  arr[5],size;
    int s;

    printf("Enter the size of array less than 100: ");
    scanf("%d", &size);
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("The entered array is: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    while (1)
    {
        printf("\n\nPress a number form 1 to 8 for the following operations: \n Press 1 to search an element in array\n Press 2 for reversing the array\n");
        printf(" Press 3 for Updating the element of the array\n Press 4 for Inserting an element\n Press 5 for Deleting an element\n Press 6 for Sorting the array");
        printf("\n Press 7 to return to menu\n Press 8 to Exit the program: ");
        scanf("%d", &t);
        switch (t)
        {
        case 1:
            linear_search(size, arr);
            break;
        case 2:
            array_reverse(size, arr);
            break;
        case 3:
            array_updation(size, arr);
            break;
        case 4:
            size = array_insertion(size, arr);
            break;
        case 5:
            size = array_deletion(size, arr);
            break;
        case 6:
            array_sorting(size, arr);
            break;
        case 7:
            break;
        case 8:
            goto exit;
            break;
        default:
            break;
        }
    }

exit:
    return 0;
}