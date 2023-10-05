import java.util.*;

public class ConvertPostfixToInfix {
    public static void main(String[] args) {
        String s = "ab+c-def^^*g/";
        System.out.println(prefixToInfix(s));
    }
    public static String prefixToInfix(String s){
        String ans = "";
        Stack<String>st = new Stack<String>();
        for(int i = 0;i<s.length();i++){
                 if(s.charAt(i)>='a' && s.charAt(i)<='z'){
                         st.push(s.charAt(i)+"");
                 }
                 else if(isOperator(s.charAt(i))){
                       String op1 = st.peek();
                       st.pop();
                       String op2 = st.peek();
                       st.pop();

                       String exp = "("+op2+s.charAt(i)+op1+")";
                       st.push(exp);
                 }
        }
        return st.peek();
    }

    public static boolean isOperator(char ch){
        if(ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch=='^'){
            return true;
        }
        return false;
    }
}
