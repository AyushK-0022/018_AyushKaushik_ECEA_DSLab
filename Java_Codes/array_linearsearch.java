import java.util.*;

public class array_linearsearch {
    static int search(int arr[], int n, int key) {
        for (int i = 0; i < n; i++) {
            if (arr[i] == key) {
                return i;
            }
        }
        return -1;
    }

    public static void main(String args[]) {
        int x;
        Scanner scr = new Scanner(System.in);

        System.out.print("Enter the size of the array: ");
        x = scr.nextInt();
        int myArray[] = new int[x];

        System.out.println("Enter the elements of the array: ");
        for (int i = 0; i < x; i++) {
            myArray[i] = scr.nextInt();
        }

        System.out.print("The entered array is: ");
        for (int i = 0; i < myArray.length; i++) {
            System.out.print(myArray[i] + " ");
        }

        System.out.print("\nEnter the value to be searched: ");
        int key = scr.nextInt();

        int position = search(myArray, myArray.length, key);
        if (position == -1) {
            System.out.println("Element is not found. ");
        } else {
            System.out.println("Element is found at index: " + position);
        }
        scr.close();
    }
}
