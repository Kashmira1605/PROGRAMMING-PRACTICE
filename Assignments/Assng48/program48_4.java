//write a program which accepts matrix from user and reverse the content of each column

import java.util.*;

class Matrix
{
    public int Arr[][];

    public Matrix(int i, int j)
    {
        Arr = new int[i][j];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter elements: ");
        for(int i = 0; i< Arr.length; i++)
        {
            for(int j = 0; j < Arr[i].length; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }

        sobj.close();
    }

    public void Display()
    {
        System.out.println("Elements of matrix are : ");
        for(int i = 0; i< Arr.length; i++)
        {
            for(int j = 0; j < Arr[i].length; j++)
            {
                System.out.print(Arr[i][j] + "\t");
            }
            System.out.println();
        }
    }

    public boolean ChkIdentity(int iRow, int iCol)
    {
        boolean bFlag = false;

        for(int i = 0 ; i < Arr.length; i++)
        {
            for(int j= 0; j < Arr[i].length; j++)
            {
                if(i == j)
                {
                    bFlag = true;
                }
            }
        }
        return bFlag;
    }
}

class program48_4
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iRow = 0, iCol =0;

        System.out.println("Enter number of rows");
        iRow = sobj.nextInt();

        System.out.println("Enter number of columns");
        iCol = sobj.nextInt();
        
        Matrix mobj = new Matrix(iRow,iCol);  
        mobj.Accept();
        mobj.Display();

        System.out.println("Matrix after reversing the columns is:");

        boolean bRet = false;

        mobj.ChkIdentity(iRow, iCol);

        if(bRet == true)
        {
            System.out.println("True");
        }
        else
        {
            System.out.println("False");
        }
        

        sobj.close();
    }
}