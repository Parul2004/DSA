public class ReverseAnArrayUsingRecursion {
    public static void main(String[] args) {
        int arr[] = {1,2,3,4,5};
        int n = arr.length;
        solve(arr,0,n-1);
        for(int i = 0;i<n;i++){
            System.out.print(arr[i]+" ");
        }
        System.out.println();
        System.out.println("*************************");
    }
    public static void solve(int arr[],int start,int end){
        if(start == end) return;
        int tmp = arr[start];
        arr[start] = arr[end];
        arr[end] = tmp;
        solve(arr, start+=1, end-=1);
    }
}
