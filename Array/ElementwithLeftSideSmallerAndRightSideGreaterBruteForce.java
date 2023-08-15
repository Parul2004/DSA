public class ElementwithLeftSideSmallerAndRightSideGreaterBruteForce {
    public static void main(String[] args) {
        int arr[] = {10,6,3,1,5,11,6,1,11,12};
        int n = arr.length;
        System.out.println(findElement(arr, n));
    }

    public static int findElement(int arr[], int n) {
        int ans = -1;
        for (int i = 1; i < n-1; i++) {
            int flag1 = 1;
            int flag2 = 1;
            for (int j = 0; j < i; j++) {
                if (arr[i] >= arr[j])
                    continue;
                else {
                    flag1 = 0;
                }
            }

            for (int j = i + 1; j < n; j++) {
                if (arr[i] <= arr[j])
                    continue;
                else {
                    flag1 = 0;
                }
            }

            if(flag1 == 1 && flag2 == 1){
                ans = arr[i];
                break;
            } 
        }
        return ans;
    }
}
