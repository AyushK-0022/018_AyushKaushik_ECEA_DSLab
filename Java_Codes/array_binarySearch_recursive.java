import java.util.*;
public class array_binarySearch_recursive {

    int binarySearch(int arr[], int length, int y, int num) {
        while (y<=length) {
            int mid = y + (length-y)/2;

            if (arr[mid] == num) {
                return mid;
            }

            if (arr[mid]<num) {
                return binarySearch(arr, length, mid+1, num);
            }
            else{
                return binarySearch(arr, mid - 1, 0, num);
            }
        }
        return -1;
    }
    public static void main(String[] args) {
        int key;
        array_binarySearch_recursive func = new array_binarySearch_recursive();
        Scanner scr = new Scanner(System.in);

        System.out.print("Enter the size of the array: ");
        int size = scr.nextInt();

        int myArray[] = new int[size];
        System.out.println("Enter the elements of the Array: ");
        for (int i = 0; i < size; i++) {
            myArray[i] = scr.nextInt();
        }
        System.out.print("The entered array is: ");
        for (int i = 0; i < size; i++) {
            System.out.print(myArray[i]+" ");
        }

        System.out.print("\nEnter the element to be searched in the array: ");
        key = scr.nextInt();

        int result = func.binarySearch(myArray, size-1, 0, key);

        if (result==-1) {
            System.out.println("The element is not in the array.");
        }
        else{
            System.out.println("The element is at the "+result+"th indices of the array.");
        }
    scr.close();
    }
}
