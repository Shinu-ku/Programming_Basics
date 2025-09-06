// Abstract class Super
abstract class Super {
    // Constructor
    Super() {
        System.out.println("Super");
    }

    // Abstract method
    abstract void meth();

    // Concrete method
    void anotherMethod() {
        System.out.println("Another method in Super");
    }
}

// Class sub extends Super
class Sub extends Super {
    // Implementing the abstract method
    void meth() {
        System.out.println("Sub method");
    }
}

// Test class
class Test {
    public static void main(String[] args) {
        // Creating an instance of Sub
        Sub s = new Sub();
        s.meth(); // Output: Sub method
        s.anotherMethod(); // Output: Another method in Super

        // You cannot create an instance of Super directly
        // Super s1 = new Super(); // This will result in a compilation error
    }
}