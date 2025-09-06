public class Condition {
    public static void main(String[] args) {
//        if condition
        int i = 10;
        if (i < 15) {
            System.out.println("10 is less than 15");
        }
        // System.out.println("Outside if-block");
//        if else condition
        boolean a = true;
        if (a) {
            System.out.println("a is true");
        } else {
            System.out.println("a is false");
        }

//        if else ladder condition
        int score = 85;

        if (score >= 90) {
            System.out.println("Excellent!");
        } else if (score >= 80) {
            System.out.println("Very good!");
        } else if (score >= 70) {
            System.out.println("Good!");
        } else {
            System.out.println("Keep working hard!");
        }
//        nested if condition
        int age = 21;
        String city = "Agra";

        if (age >= 18)
        {
            if (city == "Agra") {
                System.out.println("Eligible for voting");
            }
        }
        else {
            System.out.println("Not eligiblr for voting");
        }



    }
}
