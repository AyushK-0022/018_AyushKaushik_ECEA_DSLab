#include<stdio.h>

int linear_search(int arr[], int s, int n){
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == s)
        {
            return i;
            break;
        }
    }
    return -1;
}
int main(){
    int n, s;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("The entered array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nEnter the element to be searched in the array: ");
    scanf("%d", &s);

    int result = linear_search(arr, s, n);
    if (result == -1)
    {
        printf("The element is not in the array.");
    }
    else
    {
        printf("The element is at %dth position in the array.", result);
    }
return 0;
}