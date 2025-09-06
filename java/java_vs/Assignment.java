public class Assignment {
    public static void main(String[] args) {
        int a = 14 , b = 12;
        System.out.println("a = "+(a+= b));//a=a+b
        System.out.println("a = "+(a-= b));//a=a-b
        System.out.println((a));
        System.out.println((a));
        System.out.println("a = "+(a*= b));//a=a*b
        System.out.println((a));
        System.out.println("a = "+(a/= b));//a=a/b
        System.out.println((a));
        System.out.println("a = "+(a%= b));//a=a%b
        System.out.println((a));
    }
}
