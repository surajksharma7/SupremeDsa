import java.util.Scanner;

public class lab_1{

    void minArray(int arr[],int size){
        int temp;
        for(int i = 0;i<size;i++){
            for(int j = i+1;j<size;j++){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j]  = temp; 
            }
        }
    }
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
    }
}
