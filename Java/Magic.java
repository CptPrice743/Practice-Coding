import java.util.Scanner;

public class Magic
{
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);

        //Decalring variable and asking for user input
        System.out.print("Enter Number: ");
        int myNumber = in.nextInt();
        //myNumber will be refered as Original Number

        //Setting variables and arethmatic
        int stepOne = myNumber * myNumber;
        int stepTwo = stepOne + myNumber;
        int stepThree = stepTwo / myNumber;
        int stepFour = stepThree + 17;
        int stepFive = stepFour - myNumber;
        int stepSix = stepFive / 6;
        
        //Print Statement
        System.out.println("I'm guessing...the answer is...." + stepSix + "!");
    }
}