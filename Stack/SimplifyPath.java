
import java.util.Stack;
public class SimplifyPath {
    public static void main(String[] args) {
        String str = "/a/./b/../../c/";
        // /a/./b/c
        System.out.println(simplifyPath(str));
    }

     public static String simplifyPath(String path) {
        Stack<Character>st = new Stack<Character>();
        int n = path.length();

        for(int i = 0;i<n;i++){
            if(st.size()>0 && (st.peek() == '.' && path.charAt(i)=='.' )){
                st.pop();
            }
            else if(st.size()>0 && (
            st.peek() == '/' && path.charAt(i) == '/' )){
                
            }
            else{
                st.push(path.charAt(i));
            }

        }

        StringBuilder str = new StringBuilder("");
        while(!st.isEmpty()){
            str.append(st.peek());
            st.pop();
        }
        // System.out.println(str);
        str.reverse();
        n = str.length();
        return (n==1)? str.toString() : str.toString().substring(0,n-1);
    }
}
