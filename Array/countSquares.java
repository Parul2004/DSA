import java.util.*;

class countSquares {
    public static void main(String[] args) {
        Scanner ip = new Scanner(System.in);
        int n = ip.nextInt();

        int cnt = 0, i = 1;

        while (i * i < n) {
            cnt++;
            i++;
        }

        System.out.println(cnt);

    }
}