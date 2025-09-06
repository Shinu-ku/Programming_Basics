public class MathOperations {
    public static class Converter{
        public static double inchesTOCentimeters(double inches){
            return inches * 2.54;
        }
        public static double poundsToKilograms(double pounds){
            return pounds * 0.453592;
        }
    }

    public static void main(String[] args) {
        System.out.println("10 inches in cm: " + MathOperations.Converter.inchesTOCentimeters(10));
        System.out.println("20 pounds in Kg: "+ MathOperations.Converter.poundsToKilograms(20));
    }
}
