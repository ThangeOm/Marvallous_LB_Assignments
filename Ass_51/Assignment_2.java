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
        System.out.println("Please enter the elements of matrix:");
        Scanner sobj = new Scanner(System.in);

        for(int i = 0;i < Arr.length;i++)
        {
            for(int j = 0;j < Arr[0].length;j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }
    }
    public void Display()
    {
        System.out.println("Elements of matrix are:");
        for(int i = 0; i < Arr.length; i++)
        {
            for(int j = 0; j < Arr[0].length; j++)
            {
                System.out.print(Arr[i][j] + "\t");
            }
            System.out.println();
        }
    }

    public void SwapConsecutiveColumns()
    {
        int rows = Arr.length;
        int cols = Arr[0].length;

        for(int j = 0; j < cols - 1; j += 2)
        {
            for(int i = 0; i < rows; i++)
            {
                int temp = Arr[i][j];
                Arr[i][j] = Arr[i][j + 1];
                Arr[i][j + 1] = temp;
            }
        }

        System.out.println("Matrix after swapping consecutive columns:");
        Display();
    }

}

class Assignment_2
{
    public static void main(String[]args)
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of rows :");
        int iRow = sobj.nextInt();

        System.out.println("Enter the number of columns :");
        int iCol = sobj.nextInt();

        Matrix mobj = new Matrix(iRow,iCol);
        mobj.Accept();
        mobj.Display();

        mobj.SwapConsecutiveColumns();
    }
 

}