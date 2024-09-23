import java.util.Scanner;

public class lab_1{

    int minArray(int arr[],int size){
        int minimum = arr[0];

        for(int i = 0;i<size;i++){
            if(minimum>arr[i]){
                arr[i] = minimum;
            }
        }
        return minimum ;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter size of array ");
        int size = sc.nextInt();

        int[] number = new int[size];

        for(int i =0;i<size;i++){
            System.out.println("enter value of arr " + i );
            number[i] = sc.nextInt(); 
        }
        for(int i=0;i<size;i++){
            System.out.print(number[i]);
        }
        lab_1 var = new lab_1();
        int value = var.minArray(number,size);
        System.out.println("the lowest value int the array is " +value );
    }
}
