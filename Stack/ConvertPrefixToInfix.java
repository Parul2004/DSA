import java.util.Stack;

public class ConvertPrefixToInfix {
    public static void main(String[] args) {
        String s = "/*-+abc^d^efg";
        System.out.println(prefixToInfix(s));
    }

    public static String prefixToInfix(String s){
        Stack<String>st = new Stack<>();

        for(int i = s.length()-1;i>=0;i--){
            if(s.charAt(i)>='a' && s.charAt(i)<='z'){
                st.push(s.charAt(i)+"");
            }
            else if(isOperator(s.charAt(i))){
                   String op1 = st.peek();
                   st.pop();
                   String op2 = st.peek();
                   st.pop();

                   String ans = "("+op1+s.charAt(i)+op2+")";
                   st.push(ans);
            }
        }
        return st.peek();
    }
    public static boolean isOperator(char s){
        if(s == '+' || s == '-' || s == '*' || s == '/' || s == '^'){
            return true;
        }
        return false;
    }
}
