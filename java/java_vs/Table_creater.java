import java.util.*;
public class Table_creater {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("ENTER THE NO:");
        int n = sc.nextInt();
        System.out.println("Table of "+(n));

        for (int i = 0; i <= 10; i++)
        { 
            System.out.println((n)+" * "+(i)+(" = ")+(n*i));
        }
    }
}
