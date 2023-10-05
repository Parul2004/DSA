import java.util.Scanner;

public class PrintNTo1ByBackTracking {
    public static void main(String[] args) {
         Scanner ip = new Scanner(System.in);
        int n = ip.nextInt();
        solve(0,n);
        ip.close();
    }
    public static void solve(int n,int num){
        if(n==num) return;
        solve(n+=1,num);
        System.out.println(n);
    }
}
