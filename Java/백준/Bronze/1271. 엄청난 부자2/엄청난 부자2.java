import java.math.BigInteger;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        BigInteger number1 = sc.nextBigInteger();
        BigInteger number2 = sc.nextBigInteger();

        System.out.println(number1.divide(number2));    // 몫
        System.out.println(number1.remainder(number2)); // 나머지
    }
}
