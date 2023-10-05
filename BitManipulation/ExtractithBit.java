import java.util.Scanner;

public class ExtractithBit {
    public static void main(String[] args) {
        Scanner ip = new Scanner(System.in);
        int n = ip.nextInt();
        int i = ip.nextInt();
        System.out.println(ithBit(n,i));
    }
    public static int ithBit(int n,int i){
        return (n>>i)&1;
    }
}
