
public class CountTheSubSequencesWhoseSumK {
    public static void main(String[] args) {
         int arr[] = {1,2,1,2};
        int sum = 2;
        int ansSum = 0;
        System.out.println(solve(arr,0,sum,ansSum));
    }
    public static int solve(int arr[],int idx,int sum,int ansSum){
        if(ansSum > sum) return 0;
        
        if(idx == arr.length){
            if(sum == ansSum) return 1;
            else return 0;
        }

        ansSum+=arr[idx];
        
        int l = solve(arr, idx+1, sum, ansSum);

        ansSum-=arr[idx];

        int r = solve(arr, idx+1, sum, ansSum);

        return l+r;
    }
}
