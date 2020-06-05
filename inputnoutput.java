// Output syntax in java
class AssignmentOperator {
    public static void main(String[] args) {
    	
        System.out.println("Java programming is interesting.");   
    }
}
//input an integer from a user, (INUT SYNTAX IN JAVA)
import java.util.Scanner;

class Input {
    public static void main(String[] args) {
    	
        Scanner input = new Scanner(System.in);
    	
        System.out.print("Enter an integer: ");
        int number = input.nextInt();
        System.out.println("You entered " + number);

        // closing the scanner object
        input.close();
    }
}
