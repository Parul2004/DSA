import java.util.Scanner;

public class RemoveLastSetBit {
    public static void main(String[] args) {
        Scanner ip = new Scanner(System.in);
        int n = ip.nextInt();
        System.out.println(op(n));
    }
    public static int op(int n){
        return n&(n-1);
    }
}
