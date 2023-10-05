import java.util.Scanner;

public class CheckIfithBitSetOrNot {
    public static void main(String[] args) {
        Scanner ip = new Scanner(System.in);
        int n = 13;
        int i = 0;
        if(ithBit(n,i) == 1) System.out.println("True");
        else System.out.println("False");
    }
    public static int ithBit(int n,int i){
        return (n>>i)&1;
    }
}
