import java.util.Scanner;

public class SetithBit {
    public static void main(String[] args) {
        Scanner ip = new Scanner(System.in);
        int n = ip.nextInt();
        int i = ip.nextInt();

        System.out.println(SetBit(n, i));
    }

    public static int SetBit(int n, int i) {
        int mask = 1 << i;
        return n | mask;
    }
}
