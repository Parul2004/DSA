import java.util.Scanner;

public class SumOfNaturalNumber {
    public static void main(String[] args) {
        Scanner ip = new Scanner(System.in);
        int n = ip.nextInt();
        System.out.println(solve(n));
    }

    public static int solve(int n) {
        if (n == 0)
            return 0;
        return n + solve(n - 1);
    }
}
