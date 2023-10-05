public class PrintRangeFromLToR {
    public static void main(String[] args) {
        int l = 3, r = 6;
        int XorOfLeft = findXor(l-1);
        int XorOfRight = findXor(r);
        System.out.println(XorOfRight - XorOfLeft);
    }

    public static int findXor(int n) {
        if (n % 4 == 0)
            return n;
        else if (n % 4 == 1)
            return 1;
        else if (n % 4 == 2)
            return n + 1;
        else if (n % 4 == 3)
            return 0;
        return -1;
    }
}
