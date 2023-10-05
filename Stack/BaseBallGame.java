import java.util.Stack;

public class BaseBallGame {
    public static void main(String[] args) {
        String operations[] = { "5", "-2", "4", "C", "D","9","+","+"};
        System.out.println(calPoints(operations));
    }

    public static int calPoints(String[] operations) {
        Stack<Integer> st = new Stack<Integer>();
        int n = operations.length;

        for (int i = 0; i < n; i++) {

            if (st.isEmpty()) {
               int num = 0;
                int k = 0;
                int flag = 0;
                String str = operations[i];
                if(str.charAt(0) == '-'){
                    k = 1;
                    flag = 1;
                } 
                for (int j = k; j < str.length(); j++) {
                    num = (num * 10) + (str.charAt(j) - '0');
                }
                if(flag == 1){
                    num *= -1;
                }
                System.out.println("num is " + num);
                st.push(num);
            }

            else if (operations[i].equals("+")) {
                int a = st.peek();
                System.out.println("a is "+a);
                st.pop();
                int b = st.peek();
                System.out.println("b is "+b);
                st.pop();
                st.push(b);
                st.push(a);
                System.out.println("a+b is "+(a+b));
                st.push(a + b);
            } else if (operations[i].equals("C")) {
                st.pop();
            } else if (operations[i].equals("D")) {
                int c = st.peek();
                System.out.println("c is "+(c*2));
                st.push(c * 2);
            } else {
                int num = 0;
                int k = 0;
                int flag = 0;
                String str = operations[i];
                if(str.charAt(0) == '-'){
                    k = 1;
                    flag = 1;
                } 
                for (int j = k; j < str.length(); j++) {
                    num = (num * 10) + (str.charAt(j) - '0');
                }
                if(flag == 1){
                    num *= -1;
                }
                System.out.println("num is " + num);
                st.push(num);
            }
        }

        int sum = 0;
        System.out.println("size of stack is "+st.size());
        while (!st.isEmpty()) {
            System.out.println(st.peek());
            sum += st.peek();
            st.pop();
        }
        return sum;
    }
}
