public class CheckANumberPowerOfTwo {
    public static void main(String[] args) {
        int n = 6;
        if(checkPowerOf2(n) == 0){
            System.out.println("true");
        }
        else{
            System.out.println("false");
        }
    }
    public static int checkPowerOf2(int n){
        return n&(n-1);
    }
}
