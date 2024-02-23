import java.util.*;
public class Java_basics {
    public static void main(String[] args) {
        int x;
        System.out.println("Hello World with Java" + " This is Ayush Kaushik");
        System.out.print("Hello World with Java\n");
        System.out.print("Hello World with Java\n");
        
        System.out.println("*");
        System.out.println("**");
        System.out.println("***");
        System.out.println("****");

        Scanner scr = new Scanner(System.in);
        System.out.print("Enter the Name: ");
        String name = scr.nextLine();

        System.out.println(name);

        System.out.print("Enter the size of the array: ");
        x = scr.nextInt();
        int myArray[] = new int[x];
        System.out.println("Enter the elements of the array: ");
        for (int i = 0; i < x; i++) {
            myArray[i] = scr.nextInt();
        }
        System.out.print("The entered array is: ");
        for (int i = 0; i < myArray.length; i++) {
            System.out.print(myArray[i]+" ");
        }
        scr.close();
    }
}