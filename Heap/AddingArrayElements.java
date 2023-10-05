import java.util.PriorityQueue;

class AddingArrayElements{
    public static void main(String[] args) {
        int arr[] = {1,10,12,9,2,3};
        int k = 6;
        System.out.println(minOperations(arr,arr.length,k));
    }

    public static int minOperations(int[] arr, int n, int k) {
        // code here
        
        PriorityQueue<Integer>pq = new PriorityQueue<>();
        
        for(int i = 0;i<n;i++){
            pq.add(arr[i]);
        }
        
        int cnt = 0;
        int flag = 0;
        while(pq.size()>1){
            int a = pq.peek();
            pq.remove();
            
            int b = pq.peek();
            pq.remove();
           
            if(b>=k && a>=k){
                flag = 1;
                return cnt;
            } 
            
            cnt+=1;
            
            pq.add(a+b);
        }
        if(flag == 0 && pq.peek()<k) return -1;
        return cnt;
    }
}