public class Ternary {
    public static void main(String[] args) {

        int a = 12, b = 10, re;
        re = (a > b) ? (a + b) : (a - b);
        System.out.println("Result = " + re);
// Output: Result = -5

        boolean condition = true;
        String result = (condition) ? "It's true!" : "It's false!";
        System.out.println(result);
// Output: It's true!


    }
}
