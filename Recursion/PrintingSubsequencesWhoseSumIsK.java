import java.util.ArrayList;

public class PrintingSubsequencesWhoseSumIsK {
    public static void main(String[] args) {
        int arr[] = {1,2,1};
        int sum = 2;
        ArrayList<Integer>ans = new ArrayList<>();
        int ansSum = 0;
        solve(arr,sum,0,ans,ansSum);

    }
    public static void solve(int arr[],int sum,int idx,ArrayList<Integer>ans,int ansSum){
        if(idx == arr.length){
            if(ansSum == sum){
                System.out.println(ans);
            }
           return;
        }
        ans.add(arr[idx]);
        ansSum+=arr[idx];
        solve(arr, sum, idx+1, ans, ansSum);
        ans.remove(ans.size()-1);
        ansSum-=arr[idx];
        solve(arr, sum, idx+1, ans, ansSum);
    }
}
