#include<iostream>
int binarySearch(int arr[], int length){
    int x;
    int y = 0;

    std::cout << "\nEnter the element to be searched in the array: ";
    std::cin >> x;

    while (y <= length)
    {
        int mid = y + (length - y) / 2;
        if (arr[mid] == x)
        {
            return mid;
        }
        if (arr[mid] < x)
        {
            y = mid + 1;
        }
        else
        {
            length = mid - 1;
        }
    }
    return -1;
}

int main(){
    int size;

    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    int myArray[size];
    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++)
    {
        std::cin >> myArray[i];
    }
    std::cout << "The entered array is: ";
    for (int i = 0; i < size; i++)
    {
        std::cout << myArray[i] << " ";
    }
    int result = binarySearch(myArray, size-1);
    if (result == -1)
    {
        std::cout << "The element is not in the array.";
    }
    else
    {
        std::cout << "The element is at " << result << "th index of the array.";
    }
    return 0;
}
