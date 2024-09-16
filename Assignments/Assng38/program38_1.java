//write a java program which accept number of rows and number of columns from the user and display below pattern

//Input:    iRow = 4        iCol = 4

//Output :      A   B   C   D
//              A   B   C   D
//              A   B   C   D
//              A   B   C   D

import java.util.*;

class Pattern
{
   
    public void Pattern1(int iRow, int iCol)
    {
        int i = 0 , j = 0;
        char ch = '\0';

        for(i = 1; i <= iRow ; i++)
        {
            for(j=1 , ch = 'A'; j<= iCol; j++, ch++)
            {
                System.out.print(ch + "\t");
            }
            System.out.println();
        }
    }
}

class program38_1
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