// Write menu-driven program to input 1D array and perform following operations:
// a.Linear search for an element.
// b.Inserting an element at specified position.
// c.Deleting an element from the specified position.
// d.Reversing the array.
// e.Updating the array , multiply the odd-indexed elements by 2 and adding 5 to all the elements at even index.

import java.util.*;

public class array_operations {

    int linear_search(int array[], int ele, int length) {
        for (int i = 0; i < length; i++) {
            if (array[i] == ele) {
                return i;
            }
        }
        return -1;
    }

    int array_inserion(int array[], int ele, int place, int length) {

        for (int i = length + 1; i > place; i--) {
            array[i] = array[i - 1];
        }

        array[place] = ele;

        for (int i = 0; i < length + 1; i++) {
            System.out.print(array[i] + " ");
        }
        return length = length + 1;
    }

    int array_deletion(int array[], int ele, int length) {
        int result = linear_search(array, ele, length);
        if (result == -1) {
            System.out.println("The element to be deleted is not in the array.");
        } else {
            for (int i = result; i < length; i++) {
                array[i] = array[i + 1];
            }

            System.out.print("The updated array after deletion of element is: ");
            for (int i = 0; i < length - 1; i++) {
                System.out.print(array[i] + " ");
            }
        }
        return length = length - 1;
    }

    void array_reverse(int array[], int length) {
        int temp;
        for (int i = 0; i < length / 2; i++) {
            temp = array[i];
            array[i] = array[length - 1 - i];
            array[length - 1 - i] = temp;
        }
        System.out.print("The reversed array is: ");
        for (int i = 0; i < length; i++) {
            System.out.print(array[i] + " ");
        }
    }

    void array_updation(int array[], int length) {
        for (int i = 0; i < length; i++) {
            if (i % 2 == 0) {
                array[i] = array[i] * 2;
            } else {
                array[i] = array[i] + 5;
            }
        }
        System.out.print("The updated array is: ");
        for (int i = 0; i < length; i++) {
            System.out.print(array[i] + " ");
        }
    }

    void array_sorting(int array[], int length) {
        int min;
        for (int i = 0; i < length; i++) {
            for (int j = i + 1; j < length; j++) {
                if (array[j] < array[i]) {
                    min = array[j];
                    array[j] = array[i];
                    array[i] = min;
                }
            }
        }

        System.out.println("The sorted array is: ");
        for (int i = 0; i < length; i++) {
            System.out.print(array[i] + " ");
        }
    }

    public static void main(String[] args) {
        int size, key, num, pos, result;
        Scanner scr = new Scanner(System.in);
        array_operations func = new array_operations();

        int[] myArray = new int[100];

        System.out.print("Enter the size of the array less than 100: ");
        size = scr.nextInt();

        System.out.println("Enter the elements of the array: ");
        for (int i = 0; i < size; i++) {
            myArray[i] = scr.nextInt();
        }

        System.out.print("The enetered array is: ");
        for (int i = 0; i < size; i++) {
            System.out.print(myArray[i] + " ");
        }

        label: while (true) {
            System.out.println("\nPress 1 to 6 for the following array operations:");
            System.out.println(" 1 for linear search for an element.\n 2 for Inserion.\n 3 for Deletion.");
            System.out.println(" 4 for Reversing the array.\n 5 for Updation.");
            System.out.print(" 6 for sorting the array.\n 7 for exiting the program:");
            key = scr.nextInt();

            switch (key) {
                case 1:
                    System.out.print("\nEnter the element to be searched in the array: ");
                    num = scr.nextInt();

                    result = func.linear_search(myArray, num, size);

                    if (result == -1) {
                        System.out.println("The element is not in the array.");
                    } else {
                        System.out.println("The element is at the " + result + "th indices of the array.");
                    }
                    break;
                case 2:
                    System.out.print("Enter the position at which element is to be inserted: ");
                    pos = scr.nextInt();

                    System.out.print("Enter the element to be inserted: ");
                    num = scr.nextInt();

                    size = func.array_inserion(myArray, num, pos, size);
                    break;
                case 3:
                    System.out.print("Enter the element to be deleted: ");
                    num = scr.nextInt();

                    size = func.array_deletion(myArray, num, size);
                    break;
                case 4:
                    func.array_reverse(myArray, size);
                    break;
                case 5:
                    func.array_updation(myArray, size);
                    break;
                case 6:
                    func.array_sorting(myArray, size);
                    break;
                case 7:
                    break label;
                default:
                    break;
            }
        }
        scr.close();
    }
}