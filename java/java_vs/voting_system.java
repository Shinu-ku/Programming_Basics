import java.util.*;
public class voting_system {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);

        System.out.println("enter your age");
        int age = sc.nextInt();

        System.out.println("enter your city name");
        String city = sc.next();
//        System.out.println(city);

        if (age >= 18)
        {
//            System.out.println("the code is running");
            if (city.equals("agra"))
            {
                System.out.println("the voter is eligible");
            }
        }
        else {
            System.out.println("the voter is not eligible");
        }
    }
}
