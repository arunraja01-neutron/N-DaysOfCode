import java.util.Scanner;
class TestClass {
    public static void main(String args[] ) throws Exception {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while( t>0 ){
            int n,k;
            n=sc.nextInt();
            k=sc.nextInt();
            int mul = (k*2)+1;
            if(n%mul!=0){
                System.out.println((n/mul)+1);
            }
            else{
                System.out.println(n/mul);
            }
            t--;
        }

    }
}
