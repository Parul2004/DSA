class SwapTwoNumberByXOR{
    public static void main(String[] args) {
        int a = 4,b = 5;
        System.out.println(a+" "+b);
        a = a^b;
        b = a^b; // b = (a^b)^b = a 
        a = a^b; // (a^b)^a = b
        System.out.println(a+" "+b);
    }
}