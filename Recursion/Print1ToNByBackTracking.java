import java.util.Scanner;

public class Print1ToNByBackTracking {
    public static void main(String[] args) {
        Scanner ip = new Scanner(System.in);
        int n = ip.nextInt();
        solve(n);
        ip.close();
    }
    public static void solve(int n){
        if(n==0) return;
        solve(n-1);
        System.out.println(n);
    }
}
