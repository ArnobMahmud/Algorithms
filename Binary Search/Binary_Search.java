/*
    Author : Arnob Mahmud

    Mail : arnob.tech.me@gmail.com
*/

import java.util.Scanner;
public class Binary_Search {
    private static Scanner input;
    public static void main(String[] args) {

        int middle, indexItem;
        int left = 0;
        int right = 9;

        int [] arr = {1, 5, 7, 9, 17, 25, 38, 45, 59, 67};

        System.out.println("Enter a value which you want to search : ");

        input = new Scanner(System.in);
        indexItem = input.nextInt();

        while ( left <= right){
            
            middle = (left + right) / 2;
            if ( arr[middle] == indexItem) {
                System.out.println("Item found in " + middle + " index");
                break;
            } else if ( arr[middle] < indexItem) {
                left = middle + 1;
            } else {
                right = middle - 1;
            }
        }
        System.out.println("Value not found. ");
    }
}
