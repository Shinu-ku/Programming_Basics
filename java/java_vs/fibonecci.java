import java.util.*;
public class fibonecci {
    public static void main(String[] args) {

        Scanner sc=new Scanner(System.in);
        System.out.println("enter the no. of terms");
        int n = sc.nextInt();

        System.out.println("the fibonecci series");
        int result,a = 0,b = 1;

        System.out.print((0)+("  "));
        System.out.print((1)+("  "));

        for (int i = 0; i < n; i++) {
            result = a + b;
            System.out.print((result)+("  "));
            a = b;
            b = result;
        }
    }
}
