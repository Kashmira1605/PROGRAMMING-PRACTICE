//write a java program which accept two arrays from user and display summation of each array

//Input :   2   9   7   5   2   3
//          9   3   5   5

//Output :  28  22

import java.util.*;

class MyArray
{
    public void SumArray(int arr1[],int arr2[])
    {
        int iSum1 = 0 , iSum2 = 0;
        System.out.println("Summation of 1st array:");
        for(int iCnt = 0; iCnt< arr1.length; iCnt++)
        {
            iSum1 = iSum1 + arr1[iCnt];
        }
        System.out.println(iSum1);

        System.out.println("Summation of 2nd array:");
        for(int iCnt = 0; iCnt< arr2.length; iCnt++)
        {
            iSum2 = iSum2 + arr2[iCnt];
        }
        System.out.println(iSum2);

    }
}

class program42_5
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter size of 1st array: ");
        int iSize1 = sobj.nextInt();
        
        int iCnt = 0;

        int arr1[] = new int[iSize1];
        System.out.println("Enter elements of 1st array: ");
       
        for(iCnt = 0; iCnt < iSize1; iCnt++)
        {
          arr1[iCnt] = sobj.nextInt(); 
        }

        System.out.println("Enter size of 2st array: ");
        int iSize2 = sobj.nextInt();

        int arr2[] = new int[iSize2];
        System.out.println("Enter elements of 2st array: ");
       
        for(iCnt = 0; iCnt < iSize2; iCnt++)
        {
          arr2[iCnt] = sobj.nextInt(); 
        }

        MyArray obj = new MyArray();

        obj.SumArray(arr1,arr2);

        sobj.close();

    }
}


