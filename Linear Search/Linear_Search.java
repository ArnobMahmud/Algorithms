/*
    Author : Arnob Mahmud

    Mail : arnob.tech.me@gmail.com
*/

import java.util.Scanner;
public class Linear_Search {
    private static Scanner input;
    public static void main(String[] args) {

        System.out.println("Enter a value which you want to search : ");
        input = new Scanner(System.in);

        int [] arr = {12, 23, 44, 25, 76, 112, 32, 43, 51, 87};
        int value;

        value = input.nextInt();

        for (int i = 0; i < arr.length; i++) {
            if (value == arr[i]) {
                System.out.println("Value is in " + i + " index");
            } 
        }
        System.out.println("Value not found. ");
    }
}
