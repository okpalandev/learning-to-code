import java.util.Scanner;
public class Args {
    public static void main(String[] args) {
        System.out.println("Please enter your some data:");
        // Use a try-with-resources statement to create and close the Scanner
        try (Scanner in = new Scanner(System.in)) {
            // Use a while loop to iterate over the input
            while (in.hasNext()) {
                // Use a variable to store the input
                String arg = in.next();
                System.out.println(arg);
            }
        }
    }
}
