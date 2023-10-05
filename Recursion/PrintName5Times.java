class PrintName5Times{
    public static void main(String[] args) {
        String name = "parul";
        solve(name,0);
    }
    public static void solve(String name,int cnt){
        if(cnt == 5) return;
        System.out.println(name);
        solve(name, cnt+=1);
    }
}