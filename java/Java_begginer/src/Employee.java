public class Employee {
    private static String name;
    private int id;
    public Employee(String name, int id){
        this.name = name;
        this.id = id;
    }
    public static class Adderess {
        private String city;
        private String country;
        private int id;

        public Adderess(String city, String country){
            this.city = city;
            this.country = country;
        }
        public void displayAdderess(){
            System.out.println("Employee: "+name+" ID: "+id);
            System.out.println("Adderess: "+city+", "+country);
        }
    }

    public static void main(String[] args) {
        Employee emp = new Employee("shinu",823);
        Employee.Adderess adderess = new Adderess("Agra","India");
        adderess.displayAdderess();
    }
}
