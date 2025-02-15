import java.util.Scanner;

public class Calculator
{
    public Calculator()
    {

    }

    //Method for addition
    public int add(int a, int b)
    {
        int sum = a + b;
        return sum;
    }

    //Method for subtraction
    public int subtract(int a, int b)
    {
        int diff = a - b;
        return diff;
    }

    //Method for multiplication
    public int multiply(int a, int b)
    {
        int product = a * b;
        return product;
    }

    //Method for division
    public int division(int a, int b)
    {
        int quotient = a / b;
        return quotient;
    }

    //Method for modulo
    public int modulo(int a, int b)
    {
        int remainder = a % b;
        return remainder;
    }


    //Main Method
    public static void main(String[] args)
    {
        Calculator myCalculator = new Calculator();
        System.out.println(myCalculator.add(5, 7));
        System.out.println(myCalculator.subtract(45, 11));
        //System.out.println(myCalculator.)
    }
}