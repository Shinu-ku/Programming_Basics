
class Super{
    public void display(){
        System.out.println("Super display");
    }
}
class Sub extends Super{
    public void display(){
        System.out.println("sub display");
    }
}

public class Override {
    public static void main(String[] args) {
        Super s = new Sub();
        s.display();

        Super sc = new Super();
        sc.display();
    }
}