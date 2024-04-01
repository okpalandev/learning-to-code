import java.util.Scanner;

public class Square {
    public static void main(String[] args){
        System.out.println("Caculate the area of a rectangle?");
        System.out.println("What is the length of a side a?");
        Scanner input = new Scanner(System.in);

        float a = input.nextFloat();

        System.out.println("What is the length of side b?");
        
        float b= input.nextFloat();
        float area = a * b;
        input.close();
        
        System.out.println("The area of your rectangle is:"  + area);
    }
}