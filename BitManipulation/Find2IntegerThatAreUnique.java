public class Find2IntegerThatAreUnique {
    public static void main(String[] args) {
        int arr[] = {1,1,2,5,3,2,3,4,7,4};
        int xor = 0;
        for(int i = 0;i<arr.length;i++){
            xor^=arr[i];
        }
        
        int cnt = 0;
        while (xor>0) {
            if((xor&1) == 1) break;
            cnt++;
            xor = xor>>1;
        }
       
        int xor1 = 0,xor2 = 0;
        for(int i = 0;i<arr.length;i++){
            if((arr[i]&(1<<cnt)) == 1){
                xor1^=arr[i];
            }
            else{
                xor2^=arr[i];
            }
        }
        System.out.println(xor1+" "+xor2);
    }
}
