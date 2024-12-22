class Pen {
    String color;
    String type; // ballpoint , jell

    public void write() {
        System.out.println("Writing Something");
    }

    public void printColor() {

        System.out.println(this.color);

    }
}

 class Student{

    String name;
    int age;
    static String school;
    public void printInfo(){
        System.out.println(this.name);
        System.out.println(this.age);
    }
 }
public class OOPS {
    public static void main(String args[]) {
        // pen class

        Pen pen1 = new Pen();
        pen1.color = "Red";
        pen1.type = "Jell";
        pen1.write();
        // System.out.println(pen1.color);
        pen1.printColor();

        Pen pen2 = new Pen();
        pen2.color = "black";
        pen2.type = "Ballpoint";
        pen2.printColor();

        // student class
        Student.school = "JABP";
        Student s1 = new Student();
        s1.name = "Uthso";
        s1.age = 23;
        System.out.println(s1.school);
        s1.printInfo();
    }
}