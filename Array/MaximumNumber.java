public class MaximumNumber {
    public static void main(String[] args) {
        System.out.println(maximumNumber(9779));
    }

    public static int maximumNumber(int num) {
        // Your code here

        int rev = 0;
        while (num != 0) {
            rev = (rev * 10) + (num % 10);
            num /= 10;
        }

        int rum = 0;
        int f = 0;
        while (rev != 0) {
            int a = rev % 10;
            if (a == 7 && f == 0) {
                a = 9;
                f = 1;
            }

            rum = (rum * 10) + (a);
            rev /= 10;
        }
        num = rum;
        while (num != 0) {
            rev = (rev * 10) + (num % 10);
            num /= 10;
        }

        System.out.println(rum);

        return 0;
    }
}
