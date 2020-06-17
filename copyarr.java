class Main
{
public static void main(String[] copyargs)
{
System.out.println("This is the copy array program");
int[] numbers = {1,2,3,7,4,9};
int[] integers = numbers;
for(int digit: integers)
{
System.out.println("The numbers in the copied array are:" + digit);
}
}
}
// 2 nd method to cpoy an array in java
import java.util.Arrays;
public class Main
{
public static void main(String[] copyargs)
{
int [] numbers = {9,1,4,,2,3};
int [] substitue = new int [6];
for(i=0; i<=sumbers.length ;i++) 
{
substitute[i] = numbers[i]
}
System.out.println("The substituted elements in the array are:" + substitue[i]);
}
}
import java.util.Arrays;
import java.util.Scanner;
public class Main 
{
public static void main (String[] args) 
{
    System.out.println("This iis an array copy program in java");
    int [] numbers = new int [5];
    int [] integers = new int [5];
    Scanner input = new Scanner(System.in);
    for(int i=0; i<numbers.length ;i++)
    {
         numbers[i] = input.nextInt();
    }
    System.out.println("The first array is:");
    System.out.println(Arrays.toString(numbers));
    int i;
    for(i=0; i<numbers.length ;i++)
    {
        integers[i] = numbers[i];
    }
    System.out.println("The second array is:");
    System.out.println(Arrays.toString(integers));
}
} 
//copying an array to another array by the hel of arraycopy() function of the system class.
import java.util.Arrays;
class Main
{
    public static void main(String[] args)
    {
        System.out.println("This is an array copy program in java using arraycopy() function of the system class");
        int [] numbers = {9,2,4,3,5};
        int [] integers = new int [9];
        arraycopy(numbers,0,integers,0,5);
        System.out.println(Arrays.toString(integers));
    }
}
