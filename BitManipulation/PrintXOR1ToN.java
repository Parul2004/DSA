import java.util.Scanner;

public class PrintXOR1ToN {
    public static void main(String[] args) {
        Scanner ip = new Scanner(System.in);
        int n = ip.nextInt();
        /*
         * n == 1 ----> xor = 1
         * n == 2 ----> xor = 3
         * n == 3 ----> xor = 0
         * n == 4 ----> xor = 4
         * n == 5 ----> xor = 1
         * n == 6 ----> xor = 7
         * n == 7 ----> xor = 0
         * n == 8 ----> xor = 8
         * 
         */

        if (n % 4 == 0)
            System.out.println(n);
        else if (n % 4 == 1)
            System.out.println(1);
        else if (n % 4 == 2)
            System.out.println(n + 1);
        else if (n % 4 == 3)
            System.out.println(0);

    }
}
