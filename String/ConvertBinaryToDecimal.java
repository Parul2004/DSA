import java.util.*;

class ConvertBinaryToDecimal {
    public static void main(String[] args) {
        Scanner ip = new Scanner(System.in);
        String str = ip.next();

        long num = 0;
        int n = str.length();
        for (int i = 0; i < n; i++) {
            num = (num * 10) + (str.charAt(i) - '0');
        }

        System.out.println("Value of num is : " + num);

        int pow1 = 0;

        long ans = 0;

        while (num > 0) {
            ans = ans + (num % 10) * (int) Math.pow(2, pow1);
            pow1++;
            num /= 10;
        }

        System.out.println("Value of ans is : " + (int)ans);

    }
}