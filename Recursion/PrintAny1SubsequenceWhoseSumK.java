import java.util.ArrayList;

public class PrintAny1SubsequenceWhoseSumK {
    public static void main(String[] args) {
        int arr[] = {1,2,1};
        int sum = 2;
        int ansSum = 0;
        ArrayList<Integer>ans = new ArrayList<>();
        System.out.println(solve(arr,0,sum,ansSum,ans));
    }

    public static boolean solve(int arr[],int idx,int sum,int ansSum,ArrayList<Integer>ans){
        if(idx == arr.length){
             if(ansSum == sum){
                System.out.println(ans);
                return true;
             }
             return false;
        }
        
        ans.add(arr[idx]);
        ansSum+=arr[idx];
        if(solve(arr, idx+1, sum, ansSum, ans) == true) return true;
        ans.remove(ans.size()-1);
        ansSum-=arr[idx];
        if(solve(arr, idx+1, sum, ansSum, ans) == true) return true;
        return false;
    }

}
