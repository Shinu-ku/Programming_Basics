import java.util.Scanner;

public class Calculator {

    class Add {
        public int add(int a, int b) {
            return a + b;
        }
    }

    class Subtract {
        public int subtract(int a, int b) {
            return a - b;
        }
    }

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        Calculator calculator = new Calculator(); 
       
        Add addOperation = calculator.new Add();  
        Subtract subtractOperation = calculator.new Subtract();  

        System.out.println("Enter the first number:");
        int a = s.nextInt();

        System.out.println("Enter the second number:");
        int b = s.nextInt();

        System.out.println("'1' for addition, '2' for subtraction:");
        int choice = s.nextInt();

        if (choice == 1) {
            int result = addOperation.add(a, b);
            System.out.println("The sum is: " + result);
        } else if (choice == 2) {
            int result = subtractOperation.subtract(a, b);
            System.out.println("The difference is: " + result);
        } else {
            System.out.println("Invalid operation choice.");
        }
    }
}
