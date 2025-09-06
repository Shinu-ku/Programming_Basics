class Outerer{
    int x = 10;
    static int y = 20;

    static class My{
        public void show(){
            System.out.println(y);
        }
    }
}

public class LocalInner {
    public static void main(String[] args) {
        Outerer out = new Outerer();
        System.out.println(out.x);
        Outerer.My my = new Outerer.My();
        my.show();
    }
}
