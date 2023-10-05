public class CheckIfStringPalindromeUsingRecursion {
    public static void main(String[] args) {
        String str = "parul";
        boolean flag = solve(str,0,str.length()-1);
        if (flag) {
            System.out.println("Yup "+str+" is palindrome");
        } else {
            System.out.println("No this is not palindrome");
        }
    }

    public static boolean solve(String str,int start,int end){
        if(start == end) return true;
        if(str.charAt(start)!=str.charAt(end)) return false;
        return solve(str, start+=1, end-=1);
    }
}
