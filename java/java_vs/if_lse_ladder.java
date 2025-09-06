import java.util.*;
public class if_lse_ladder {
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("ENTER YOUR SCORE");
        int score = sc.nextInt();
        System.out.println("score grader");

        if ((score <= 100)&&(score >= 85))
        {
            System.out.println("grade A");
        } else if ((score <= 84)&&(score >= 70))
        {
            System.out.println("grade B");
        } else if ((score <= 69)&&(score >= 50))
        {
            System.out.println("grade C");
        } else if ((score <= 49)&&(score >= 30))
        {
            System.out.println("grade D");
        } else if ((score <= 29)&&(score >= 0))
        {
            System.out.println("FAIL");
        }

    }
}
