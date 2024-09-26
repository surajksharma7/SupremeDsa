import java.util.Scanner;
public class lab3{
    public static void main(String[] args) {
        Scanner inp = new Scanner(System.in);
        System.out.println("Enter value to find");
        int num = inp.nextInt();
        for(int i = 3;i<10;i++){
            if(num%i != 0){
                System.out.println("prime number ");
                break;
            }
            else{
                System.out.println("not Prime");
                break;
            }
            
        }
    }

}