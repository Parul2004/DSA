import java.util.Scanner;

public class PrintLinearlyFrom1ToN {
    public static void main(String[] args) {
        Scanner ip = new Scanner(System.in);
        int n = ip.nextInt();
        System.out.println("Print 1 to N : ");
        solve(1,n+1);
        ip.close();
    }
    public static void solve(int num,int n){
        if(num == n) return;
        System.out.println(num);
        solve(num+=1, n);
    }
}
