//write a java program which accept number of rows and number of columns from the user and display below pattern

//Input:    iRow = 4        iCol = 4

//Output :      A   B   C   D
//              a   b   c   d
//              A   B   C   D
//              a   b   c   d

import java.util.*;

class Pattern
{
   
    public void Pattern1(int iRow, int iCol)
    {
        int i = 0 , j = 0;
        char ch1 = '\0';
        char ch2 = '\0';
        for(i = 1; i <= iRow ; i++)
        {
            for(j=1, ch1 = 'A', ch2 = 'a'; j<= iCol; j++, ch1++, ch2++)
            {
                if((i%2) == 0)
                {
                    System.out.print(ch2 + "\t");
                }
                else
                {
                    System.out.print(ch1 + "\t");
                }
                
            }
            System.out.println();
        }
    }
}

class program38_2
{
    public static void main(String Arg[])
    {
        
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of rows and columns: ");
        int iRow = sobj.nextInt();
        int iCol = sobj.nextInt();

        Pattern obj = new Pattern();
        obj.Pattern1(iRow, iCol);

        sobj.close();

    }
}