import java.util.*;
public class score_grader {
    public static void main(String[] args) {

        Scanner sc=new Scanner(System.in);
        System.out.println("enter you're score");
        int score = sc.nextInt();

        if ((score <= 100)&&(score >= 90)) {
            System.out.println("'A'   Excellent!");
        } else if ((score <= 89)&&(score >= 75)) {
            System.out.println("'B'  Very good!");
        } else if ((score <= 74)&&(score >= 60)) {
            System.out.println("'C'  Good!");
        } else if ((score <= 59)&&(score >= 40))
        {
            System.out.println("'D'  Keep working hard!");
        } else if ((score <= 39)&&(score >= 27))
        {
            System.out.println("'E'  need to study hard");
        }else if ((score <= 26)&&(score >= 0))
        {
            System.out.println("'F'  FAIL");
        }

    }
}
