//Assignment operators in java.
class AssignmentOperator {
    public static void main(String[] args) {
    	
        int number1, number2;
    	
        // Assigning 5 to number1 
        number1 = 5;
        System.out.println(number1);
    	    	
        // Assigning value of variable number2 to number1
        number2 = number1;
        System.out.println(number2);
    }
    //Arthmetic operators in java
    
class ArithmeticOperator {
    public static void main(String[] args) {
    	
        double number1 = 12.5, number2 = 3.5, result;
    	
        // Using addition operator
        result = number1 + number2;
        System.out.println("number1 + number2 = " + result);
    	
        // Using subtraction operator
        result = number1 - number2;
        System.out.println("number1 - number2 = " + result);
    	
        // Using multiplication operator
        result = number1 * number2;
        System.out.println("number1 * number2 = " + result);

        // Using division operator
        result = number1 / number2;
        System.out.println("number1 / number2 = " + result);
    	
        // Using remainder operator
        result = number1 % number2;
        System.out.println("number1 % number2 = " + result);
    }
}
