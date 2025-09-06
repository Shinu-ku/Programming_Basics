import java.sql.SQLOutput;
import java.util.*;
public class greeting {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);

        System.out.println("Enter your name");
        String name = sc.next();

        System.out.println("Enter your age");
        int age = sc.nextInt();

        System.out.println("Hello! " + name +" nice to meet you!" + "  " + "you're " + age + " year old" );


    }
}

