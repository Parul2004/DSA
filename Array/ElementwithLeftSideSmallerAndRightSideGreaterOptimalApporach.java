public class ElementwithLeftSideSmallerAndRightSideGreaterOptimalApporach {
    public static void main(String[] args) {
        int arr[] = { 10, 6, 3, 1, 5, 11, 6, 1, 11, 12 };
        int n = arr.length;
        System.out.println(findElement(arr, n));
    }

    public static int findElement(int arr[], int n) {
        int maxi[] = new int[n];
        int maxiEle = Integer.MIN_VALUE;
        int mini[] = new int[n];
        int miniEle = Integer.MAX_VALUE;

        for (int i = 0; i < n; i++) {
            maxiEle = Math.max(maxiEle, arr[i]);
            maxi[i] = maxiEle;
        }

        for (int i = n - 1; i >= 0; i--) {
            miniEle = Math.min(miniEle, arr[i]);
            mini[i] = miniEle;
        }

        for (int i = 1; i < n - 1; i++) {
            if (maxi[i] == mini[i])
                return mini[i];
        }
        return -1;
    }

}
