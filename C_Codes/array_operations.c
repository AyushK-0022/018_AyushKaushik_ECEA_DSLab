#include <stdio.h>
int main()
{
    int s, d, n;
    int arr[10] = {1, 3, 2, 4, 5, 15, 7, 78, 33, 43};

label:
    printf("\n\nPress a number form 1 to 5 for the following operations: \n Press 1 to search an element in array\n Press 2 for insertinng an element in the array\n");
    printf(" Press 3 for Deleting the element of the array\n Press 4 for Reversing an array\n Press 5 for updating the array\n");
    printf("\n Press 6 to return to menu\n Press 7 to Exit the program: ");
    scanf("%d", &n);

    switch (n)
    {
    case 1:
        printf("Enter the element to be searched: ");
        scanf("%d", &s);
        for (int i = 0; i < 10; i++)
        {
            if (arr[i] == s)
            {
                printf("The element is at %d indices", i);
            }
        }
        break;
    case 2:
        printf("\nEnter the position at which number is to be inserted: ");
        scanf("%d", &n);

        for (int i = 10 + 1; i >= n; i--)
        {
            {
                arr[i] = arr[i - 1];
            }
        }

        printf("\nEnter the element to be inserted: ");
        scanf("%d", &arr[n]);

        for (int i = 0; i < 10 + 1; i++)
        {
            printf("%d ", arr[i]);
        }
        break;
    case 3:
        printf("\n\nEnter the position of element to be deleted: ");
        scanf("%d", &d);

        for (int i = d; i < 10; i++)
        {
            arr[i] = arr[i + 1];
        }
        for (int i = 0; i < 10 - 1; i++)
        {
            printf("%d ", arr[i]);
        }
        break;
    case 4:
        for (int i = 0; i < 10 / 2; i++)
        {
            int b;
            b = arr[i];
            arr[i] = arr[10 - i - 1];
            arr[10 - i - 1] = b;
        }
        printf("\nThe reversed array is: ");
        for (int i = 0; i < 10; i++)
        {
            printf("%d ", arr[i]);
        }
        break;
    case 5:
        for (int i = 0; i < 10; i++)
        {
            if (i % 2 != 0)
            {
                arr[i] = arr[i] * 2;
            }
            else
            {
                arr[i] = arr[i] + 5;
            }
        }
        printf("\nThe updated array is: ");
        for (int i = 0; i < 10; i++)
        {
            printf("%d", arr[i]);
        }
        break;
    case 6:
        goto label;
    case 7:
        goto exit;
    default:
        break;
    }
exit:
    return 0;
}