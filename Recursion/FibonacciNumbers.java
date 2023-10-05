import java.util.Scanner;

public class FibonacciNumbers {
    public static void main(String[] args) {
        Scanner ip = new Scanner(System.in);
        int n = ip.nextInt();
        System.out.println(fib(n));
    }
    public static int fib(int n){
        if(n<=1) return n;
        return fib(n-1)+fib(n-2);
    }
}
