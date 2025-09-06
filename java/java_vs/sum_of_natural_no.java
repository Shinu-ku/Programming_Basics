import java.util.*;
public class sum_of_natural_no {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the no. of terms");
        int n = sc.nextInt();
        int result = 0;

        for (int i = 1; i <= n; i++) {
            result += i;
        }
        System.out.println(("The sum of natural upto: ")+(n)+(" = ")+(result));
    }
}
