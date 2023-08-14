import java.util.Collections;
import java.util.Stack;

public class InfixToPrefix {
    public static void main(String[] args) {
        String s = "((a+b-c)*d^e^f)/g";
        System.out.println(Prefix(s));
    }

    public static String Prefix(String s) {
        String ans = "";
        StringBuilder st = new StringBuilder(s);
        st.reverse();

        int n = st.length();
        for (int i = 0; i < n; i++) {
            if (st.charAt(i) == ')') {
                st.setCharAt(i, '(');
            } else if(st.charAt(i) == ')') {
                st.setCharAt(i, '(');
            }
        }

        Stack<Character> stk = new Stack<>();

        for (int i = 0; i < n; i++) {
            if (st.charAt(i) >= 'a' && st.charAt(i) <= 'z') {
                ans += st.charAt(i);
            } else if (st.charAt(i) == '(') {
                stk.push(st.charAt(i));
            } else if (st.charAt(i) == ')') {
                while ((!stk.isEmpty()) && (stk.peek() != '(')) {
                    ans += stk.peek();
                    stk.pop();
                }
                if (stk.peek() == '(')
                    stk.pop();
            } else if (isOperator(st.charAt(i))) {
                if (stk.isEmpty())
                    stk.push(st.charAt(i));
                else {
                    if (prec(st.charAt(i)) > prec(stk.peek())) {
                        stk.push(st.charAt(i));
                    } else if ((prec(st.charAt(i))) == prec(stk.peek())
                            && st.charAt(i) == '^') {
                        while ((prec(st.charAt(i))) == prec(stk.peek())
                                && st.charAt(i) == '^') {
                            ans += stk.peek();
                            stk.pop();
                        }

                        stk.push(st.charAt(i));
                    } else if ((prec(st.charAt(i))) == prec(stk.peek())) {
                        stk.push(st.charAt(i));

                    }

                    else{
                        while((!stk.isEmpty()) && 
                        prec(st.charAt(i)) < prec(stk.peek())){
                            ans+=stk.peek();
                            stk.pop();
                        }

                        stk.push(st.charAt(i));
                    }
                }

            }
        }

        while (!stk.isEmpty()) {
            ans+=stk.peek();
            stk.pop();
        }

        StringBuilder res = new StringBuilder(ans);
        res.reverse();

        
        return res.toString();
    }

    public static int prec(char ch) {
        if (ch == '^')
            return 3;
        else if (ch == '*' || ch == '/')
            return 2;
        else if (ch == '-' || ch == '+')
            return 1;
        else
            return -1;
    }

    public static boolean isOperator(char ch) {
        if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
            return true;
        else
            return false;
    }
}
