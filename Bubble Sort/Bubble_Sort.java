/*
    Author : Arnob Mahmud

    Mail : arnob.tech.me@gmail.com
*/

public class Bubble_Sort {
    public static void main(String[] args){

        int temp;
        int [] A = new int[5];

        for (int i = 0; i < A.length; i++) {
            for (int j = 0; j < A.length-i-1; j++) {
                if (A[j] > A[j+1]) {
                    temp = A[j];
                    A[j] = A[j+1];
                    A[j+1] = temp;
                }
            }
        }
    }
}
