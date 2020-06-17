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
