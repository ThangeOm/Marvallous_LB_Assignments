import java.util.*;

class Matrix
{
    private int Arr[][];

    public Matrix(int A,int B)
    {
        Arr = new int[A][B];

    }

    public void Accept()
    {
        System.out.println("Please enter the element of matrix:");
        Scanner sobj = new Scanner(System.in);

        int i , j = 0;
        for(i = 0; i < Arr.length;i++)
        {
            for(j = 0;j < Arr[0].length;j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }
    }

    public void Display()
    {
        System.out.println("Element of matrix are :");

        int i, j = 0;
        for(i = 0;i < Arr.length;i++)
        {
            for(j = 0;j <Arr[0].length;j++)
            {
                System.out.print(Arr[i][j]+ "\t");
            }
            System.out.println();
        }
    }

    public void ReverseCol()
    {
        int j = 0;
        int iStart, iEnd = 0;

        for(j = 0;j < Arr[0].length;j++)
        {
            iStart = 0;
            iEnd = Arr[0].length - 1;

            while(iStart < iEnd)
            {
                int temp = Arr[iStart][j];
                Arr[iStart][j] = Arr[iEnd][j];
                Arr[iEnd][j] = temp;

                iStart++;
                iEnd--;
            }
        }

        System.out.println("Matrix after reversing each Column:");
        Display();

        

    }
}
class Assignment_3
{
    public static void main(String[]args)
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of rows:");
        int iRow = sobj.nextInt();

        System.out.println("Enter the number of columns:");
        int iCol = sobj.nextInt();

        Matrix mobj = new Matrix(iRow,iCol);
        mobj.Accept();
        mobj.Display();
        mobj.ReverseCol();


    }

}