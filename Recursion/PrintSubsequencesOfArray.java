import java.util.ArrayList;

public class PrintSubsequencesOfArray {
    public static void main(String[] args) {
        int arr[] = {1,2,3};
        ArrayList<Integer>ans = new ArrayList<>();
        solve(arr,ans,0);
    }

    public static void solve(int arr[],ArrayList<Integer>ans,int idx){
        if(idx == arr.length) {
            System.out.println(ans);
            return;
        }

        ans.add(arr[idx]);
        solve(arr, ans, idx+1);
        ans.remove(ans.size()-1);
        solve(arr, ans, idx+1);
    }
}
