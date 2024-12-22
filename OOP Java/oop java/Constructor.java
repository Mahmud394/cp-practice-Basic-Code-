 class Student1{

    String name;
    int age;
    
    public void printInfo(){
        System.out.println(this.name);
        System.out.println(this.age);
    }

    // no parameter constructor
    Student1(){
        System.out.println("Constructor called");
    }
    // parameter constructor
    Student1(String name,int age){
        this.name = name;
        this.age = age;
    }
 }
public class Constructor {
    public static void main(String args[]) {
       
        // student class
        
        Student1 s1 = new Student1("Uthso", 23);
        
        /* 

        This is for non parameter constructor

        Student s1 = new Student();

        s1.name = "Uthso";
        s1.age = 23;

        */
        s1.printInfo();
        

    }
}