import java.util.*;
public class SieveOfEratosthenes {
    public static void main(String[] args) {
        Scanner ip = new Scanner(System.in);
        int n = ip.nextInt();

        for(int i = 2;i<=n;i++){
            int flag = 0;
            for(int j = 2;j<=i/2;j++){
                   if(i%j == 0){
                    flag = 1;
                    break;
                   }
            }
            if(flag == 0) System.out.print(i+" ");
        }
    }
}
