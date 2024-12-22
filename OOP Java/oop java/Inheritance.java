class Shape{

    public void area(){
        System.out.println("Displays area: ");
    }
}

class Triangle extends Shape{
        public void area(int l, int h){
            System.out.println(0.5*l*h);
        }
}  //Sngle level inheritance


class EquilateralTriangle extends Triangle{
    public void area(int l, int h){
        System.out.println(0.5*l*h);
    }
}  //Multi level inheritance

class Circle extends Shape{
    public void area(int r){
        System.out.println((3.1416)*r*r);
    }
} //Hierarchial Inheritance

public class Inheritance{
  
    public static void main(String args[]) {
       
        Triangle s3 = new Triangle();
        s3.area(3,4);
  
      }
}