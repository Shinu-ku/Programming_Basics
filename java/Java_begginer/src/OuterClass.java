public class OuterClass {
    public void createRunnable(){
        Runnable runnable = new Runnable() {
            
            public void run() {
                System.out.println("Anonymous Inner class running");
            }
        };
        runnable.run();
    }

    public static void main(String[] args) {
        OuterClass outer = new OuterClass();
        outer.createRunnable();
    }
}
