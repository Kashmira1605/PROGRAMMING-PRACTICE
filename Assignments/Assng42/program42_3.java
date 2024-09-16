// Write a java program which accept two arrays from user and display odd contents of each array

// Input :   2   9   6   5   2   3
//           45  6   12  18  23  4

// Output :  9   5   3
//           45  23  


import java.util.*;

class MyArray
{
    public void Display(int arr1[], int arr2[])
    {
        int iCnt = 0;

        System.out.println("Even elements from 1st array: ");
        for(iCnt = 0; iCnt < arr1.length; iCnt++)
        {
            if((arr1[iCnt] % 2) != 0)
            {
                System.out.print(arr1[iCnt] + "\t"); 
            }
          
        }
        System.out.println();

        System.out.println("Even elements from 2nd array: ");
        for(iCnt = 0; iCnt < arr2.length; iCnt++)
        {
          if((arr2[iCnt] % 2) != 0)
            {
                System.out.print(arr2[iCnt] + "\t"); 
            }
        }
    }
}

class program42_2
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter size of 1st array: ");
        int iSize = sobj.nextInt();
        
        int iCnt = 0;

        int arr1[] = new int[iSize];
        System.out.println("Enter elements of 1st array: ");
       
        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
          arr1[iCnt] = sobj.nextInt(); 
        }

        System.out.println("Enter size of 2st array: ");
        iSize = sobj.nextInt();

        int arr2[] = new int[iSize];
        System.out.println("Enter elements of 2st array: ");
       
        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
          arr2[iCnt] = sobj.nextInt(); 
        }

        MyArray obj = new MyArray();

        obj.Display(arr1, arr2);

        sobj.close();

    }
}

