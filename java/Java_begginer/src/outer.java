public class outer {
    public void Displaymessage(){
        String localMessage = "Hello from local inner class";

        class LocalInnerClass{
            public void printMessage(){
                System.out.println(localMessage);
            }
        }
        LocalInnerClass localInnerClass = new LocalInnerClass();
        localInnerClass.printMessage();
    }

    public static void main(String[] args) {
        outer out = new outer();
        out.Displaymessage();
    }
}
