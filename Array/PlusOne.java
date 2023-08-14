import java.util.ArrayList;
import java.util.Collections;

public class PlusOne {
    public static void main(String[] args) {
        ArrayList<Integer> al = new ArrayList<Integer>();
        al.add(1);
        al.add(2);
        al.add(4);
        ArrayList<Integer> arr = increment(al, al.size());
        for (int i = 0; i < arr.size(); i++) {
            System.out.print(arr.get(i) + " ");
        }
    }

    static ArrayList<Integer> increment(ArrayList<Integer> arr, int N) {
        // code here
        ArrayList<Integer> al = new ArrayList<Integer>();
        int carry = 1;
        // int one = 1;
        for (int i = arr.size() - 1; i >= 0; i--) {
            int sum = arr.get(i) + carry;
            System.out.println("sum is : " + sum);
            int digit = sum % 10;
            System.out.println("digit is : " + digit);
            al.add(digit);
            carry = sum / 10;
            System.out.println("carry is : " + carry);
        }

        if (carry != 0)
            al.add(carry);
        Collections.reverse(al);
        return al;

    }
}
