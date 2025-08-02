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
            for(j = 0;j < Arr.length;j++)
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
            for(j = 0;j <Arr.length;j++)
            {
                System.out.print(Arr[i][j]+ "\t");
            }
            System.out.println("\n");
        }
    }

    public void SwapRows()
    {
        int i , j = 0;
        for(i = 0;i < Arr.length - 1;i = i+2)
        {
            for(j = 0;j < Arr[0].length;j++)
            {
                Arr[i][j] = Arr[i][j] + Arr[i+1][j];
                Arr[i+1][j] = Arr[i][j] - Arr[i+1][j];
                Arr[i][j] = Arr[i][j] - Arr[i+1][j];
            }
        }
        System.out.println("Matrix after swapping consective rows:");
        Display();
    }
}
class Assignment_5
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
        mobj.SwapRows();


    }

}