//Write a program which accepts number from user and display below pattern

// Input :    7846

// Output :     6   #   #   #   #   #   #    
//              4   #   #   #   #   
//              8   #   #   #   #   #   #    #   #
//              7   #   #   #   #   #   #    #    

import java.util.*;

class PatternPrinting
{
    public void Pattern(int iNo)
    {
        if(iNo != 0)
        {
            int iDigit = iNo % 10;

            // System.out.print(iDigit + "\t");
            // for(int i = 1; i <= iDigit ; i++)
            // {
            //         System.out.print("#\t");
            // }
            // System.out.println();

            for(int i = 1; i <= iDigit ; i++)
            {
                if(i == 1)
                {
                    System.out.print(iDigit + "\t" + "#\t");
                }
                else
                {
                    System.out.print("#\t");
                }
            }
            System.out.println();

            iNo = iNo / 10;
            Pattern(iNo);
            
        }
    }
}
class program49_6
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