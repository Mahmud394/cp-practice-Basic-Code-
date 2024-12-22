interface Animals{

    void walk();

}

interface Herbivore{

}

class Horses implements Animals,Herbivore{
    public void walk(){
        System.out.println("Walks on 4 legs");
    }
}

public class Interface {

    public static void main(String[] args) {
        
        Horses horse = new Horses();
        horse.walk();
    }
     
}