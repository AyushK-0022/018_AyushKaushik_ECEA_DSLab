#include <iostream>
int linear_search(int arr[], int x, int n){
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==x)
        {
            return i;
            break;
        }
    }
    return -1;
}
int main() {
    int n, x;
    std::cout << "Enter the size of the array: ";
    std::cin >> n;

    int arr[n];
    std::cout << "Enter unique elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
    std::cout << "The enetered array is: ";
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    std::cout << "\nEnter the element to be searched in the array: ";
    std::cin >> x;
    
    int result = linear_search(arr, x, n);
    if (result == 0 || result > 0) 
    {
        printf("The element is at %dth indices in the array.", result);
    }
    else
    {
        printf("The element is not in the array.");
    }    
    return 0;
}