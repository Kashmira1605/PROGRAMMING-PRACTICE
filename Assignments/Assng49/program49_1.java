//Write a program which accepts number from user and display below pattern

// Input :    7846

// Output :   *   *   *   *   *   *   *  
//            *   *   *   *   *   *   *   *
//            *   *   *   *   
//            *   *   *   *   *   *   

import java.util.*;

class PatternPrinting
{
    public void Pattern(int iNo)
    {
        if(iNo != 0)
        {
            int iDigit = iNo % 10;

            iNo = iNo / 10;
            Pattern(iNo);
            
            for(int i = 0; i <= iDigit ; i++)
            {
                System.out.print("*\t");
            }
            System.out.println();
            
        }
    }
}
class program49_1
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number: ");
        int iNo = sobj.nextInt();

        PatternPrinting obj = new PatternPrinting();

        obj.Pattern(iNo);

        sobj.close();
    }
}