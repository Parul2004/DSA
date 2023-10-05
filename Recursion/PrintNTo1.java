import java.util.Scanner;

public class PrintNTo1 {
    public static void main(String[] args) {
        Scanner ip = new Scanner(System.in);
        int n = ip.nextInt();
        System.out.println("Print N to 1 : ");
        solve(n);
        ip.close();
    }
    public static void solve(int num){
        if(0 == num) return;
        System.out.println(num);
        solve(num-=1);
    }
}
