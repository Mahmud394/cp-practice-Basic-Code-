abstract class Animal{

    abstract void walk();
    public void eat(){
        System.out.println("Eats");
    }

}

class Horse extends Animal{
    public void walk(){
        System.out.println("Walks on 4 legs");
    }
}

class Chicken extends Animal{
    public void walk(){
        System.out.println("Walks on 2 legs");
    }
}

public class Abstract{

    public static void main(String args[]){
        Horse horse = new Horse();
        horse.walk();
        horse.eat();

        Chicken chicken = new Chicken();
        chicken.walk();
        
    }
}