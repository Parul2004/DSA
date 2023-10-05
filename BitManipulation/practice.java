import java.util.*;

public class practice {
    public static void main(String[] args) {
        int arr[] = { 75, 50, 75, 150 };
        int n = arr.length;

        // code here

        boolean brr[] = new boolean[n];
        for (int i = 0; i < n; i++) {
            brr[i] = false;
        }

        Arrays.sort(arr);
        int maxi = arr[n - 1];
        brr[n - 1] = true;

        for (int i = 0; i < n - 1; i++) {
            if (arr[i] != maxi) {
                int parul = arr[i];
                int sum1 = arr[i];
                int sum2 = arr[i];

                int k = 0;

                while (k <= 10) {
                    sum1 += parul;
                    if (sum1 == maxi) {
                        brr[i] = true;
                        break;
                    }
                    sum2 += (2 * parul);
                    if (sum2 == maxi) {
                        brr[i] = true;
                        break;
                    }
                    k++;
                }
            } else {
                brr[i] = true;
            }
        }
        int flag = 1;
        for (int i = 0; i < n; i++) {
            if (brr[i] == false) {
                flag = 0;
                System.out.println("NO");
                break;
            }
        }
        if (flag == 1)
            System.out.println("YES");

    }
}
