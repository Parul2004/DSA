import java.util.*;

public class FirstNegativeIntegerInEveryWindowOfSizeK {

    public static long[] printFirstNegativeInteger(long arr[], int N, int K) {
        ArrayList<Long> ans = new ArrayList<Long>();

        for (int i = 0; i < arr.length; i++) {
            if (i < arr.length - K + 1) {

                int flag = 0;
                for (int j = i; j < i + K && i + K <= N; j++) {
                    if (arr[j] < 0) {
                        ans.add(arr[j]);
                        System.out.println("Element : " + arr[j]);
                        flag = 1;
                        break;
                    }
                }
                if (flag == 0)
                    ans.add((long) 0);
            }
        }
        long brr[] = new long[ans.size()];
        for (int i = 0; i < ans.size(); i++) {
            brr[i] = ans.get(i);
        }
        return brr;
    }

    public static void main(String[] args) {
        long arr[] = { -8, 2, 3, -6, 10 };
        long ans[] = printFirstNegativeInteger(arr, 5, 2);
        for (int i = 0; i < ans.length; i++) {
            System.out.print(ans[i] + " ");
        }
    }
}
