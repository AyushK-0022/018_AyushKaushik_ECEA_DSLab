import java.util.*;
public class array_binarySearch_iterative {

    int binarySearch(int array[], int length, int y, int num){
        while (y <= length) {
            int mid = y + (length-y)/2;
            if (array[mid]==num) {
                return mid;
            }

            if (array[mid]>num) {
                length = mid -1;
            }
            else{
                y = mid +1;
            }
        }
        return -1;
    }
    public static void main(String[] args){
        Scanner scr = new Scanner(System.in);
        array_binarySearch_iterative func = new array_binarySearch_iterative();
        int size, key;

        System.out.print("Enter the size of the array: ");
        size = scr.nextInt();
        
        int[] myArray = new int[size];
        System.out.println("Enter th elements of the array: ");
        for (int i = 0; i < myArray.length; i++) {
            myArray[i] = scr.nextInt();
        }

        System.out.print("The entered array is: ");
        for (int i = 0; i < myArray.length; i++) {
            System.out.print(myArray[i] + " ");
        }

        System.out.print("\nEnter the element to be searched in the array: ");
        key = scr.nextInt();

        int result = func.binarySearch(myArray, myArray.length-1, 0, key);
        if (result == -1) {
            System.out.println("The element is not in the array.");
        }
        else{
            System.out.println("The element is at "+result+"th indices of array.");
        }
        scr.close();
    }
}
