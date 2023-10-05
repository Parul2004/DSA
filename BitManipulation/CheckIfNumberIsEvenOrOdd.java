public class CheckIfNumberIsEvenOrOdd {
    public static void main(String[] args) {
        int n = 7;
       
        if(isEven(n)==0){
            System.out.println("Even");
        }
        else{
            System.out.println("Odd");
        }
    }

    public static int isEven(int n){
        return (n&1);
    }
}
