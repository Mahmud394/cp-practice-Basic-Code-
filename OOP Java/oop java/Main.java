import java.util.Scanner;

public class Main {
    int x=5;
    int y;
    int modelYear;
    String modelName;
    static void method(){
        for(int i=0;i<=10;i++){
            System.out.println(i);
        }
    }
    public void publicmethod(){
        System.out.println("This is public method");
    }
    public void car(){
        System.out.println("The car is going as fast as it can");
    }
    public void speed(int maxspeed){
            System.out.println("Max speed is " +maxspeed);
    }
    public Main(){
    }
    public Main(int r){
        x=r;
    }
    public Main(int year,String name){
        modelYear = year;
        modelName = name;
    }
    @SuppressWarnings("resource")
    public static void main(String[] args) throws Exception {
        System.out.println("Hello, World!");
        Main myObj1 = new Main();
        System.out.println(myObj1.x);
        method();
        Main myObj2 = new Main();
        myObj2.y = 20;
        System.out.println(myObj2.y);
        Main myObj3 = new Main();
        myObj3.publicmethod();
        Main myCar = new Main();
        myCar.car();
        myCar.speed(59);
        Main myObj4 = new Main(5);
        System.out.println(myObj4.x);
        Main myObj5 = new Main(2011,"Tesla");
        System.out.println(myObj5.modelYear + " " + myObj5.modelName);
        Scanner myObj6 = new Scanner(System.in);
        System.out.println("Enter User Name: ");
        String Username = myObj6.nextLine();
        System.out.println("Username is: " + Username);
    }
}
