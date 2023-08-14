import java.util.*;
class InfixToPostFix{

    public static void main(String[] args) {
        // String s = "((a+b-c)*d^e^f)/g";
        String s = "a+b-c";
        System.out.println(postFix(s));
    }

    public static int prec(char ch){
        if(ch == '^') return 3;
        else if(ch == '/' || ch == '*') return 2;
        else if(ch == '+' || ch == '-') return 1;
        else return -1;
    }
    public static String postFix(String s){
        Stack<Character>st = new Stack<Character>();
        String ans = "";

        int n = s.length();
        for(int i = 0;i<n;i++){
             if(s.charAt(i)>='a' && s.charAt(i)<='x'){
                ans+=s.charAt(i);
             }
             else if(s.charAt(i) == '('){
                st.add(s.charAt(i));
             }
             else if(s.charAt(i) == ')'){
                while (st.peek() != '(') {
                    ans+=st.peek();
                    st.pop();
                }
                st.pop();
             }
             // if operator is scanned
             else{
                if (!st.isEmpty() &&
                prec(s.charAt(i)) <= prec(st.peek()) && s.charAt(i) == '^') {
                    st.push(s.charAt(i));
                }
                else{
                    while (!st.isEmpty() &&
                    prec(s.charAt(i)) <= prec(st.peek())) {
                        ans+=st.peek();
                        st.pop();
                    }
                    st.push(s.charAt(i));
                }

             }

        }
        return ans;
    }
}