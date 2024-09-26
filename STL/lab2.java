import java.util.Scanner;
public class lab3 {

    public static void main(String[] args) {
        Scanner value = new Scanner(System.in);
        System.out.println("Enter your string ");
        String S = value.nextLine();
        boolean a = true;
        for(int i=0;i<S.length()-1;i++){
            
            if(S.charAt(i) == S.charAt(S.length() -1 -i)){
                a = true;
            }
            else{
                a = false;
            }
            }
        if(a== true){
            System.out.println("String is palindrom");
        }
        else{
            System.out.println("This is not palindrom");
        }
}
}
// can we code below this lines 

