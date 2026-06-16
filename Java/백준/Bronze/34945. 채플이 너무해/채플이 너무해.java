import java.util.Scanner;

public class Main
{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int num = sc.nextInt();
        if(num >=0 && num <= 5) {
            System.out.println("Oh My God!");
        }
        else if(num >= 6) {
            System.out.println("Success!");
        }
    }
}