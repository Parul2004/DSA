public class CountTheNumberOfSetBits {
    public static void main(String[] args) {
        int n = 8; // 1000
        System.out.println(countBitSet1(n));
        System.out.println(countBitSet2(n));
    }

    public static int countBitSet1(int n) {
        int cnt = 0;
        while (n != 0) {
            if ((n & 1) == 1)
                cnt++;
            n = n >> 1;
        }
        return cnt;
    }

    public static int countBitSet2(int n) {
        int cnt = 0;
        while (n != 0) {
            n = n & (n - 1);
            cnt++;
        }
        // TC --> O(no of Set Bits)
        // This is slightly optimal as compare to the above one
        return cnt;
    }
}
