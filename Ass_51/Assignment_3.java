import java.util.*;

class Matrix
{
    private int Arr[][];

    public Matrix(int A, int B)
    {
        Arr = new int[A][B];
    }

    public void Accept()
    {
        System.out.println("Please enter the elements of the matrix:");
        Scanner sobj = new Scanner(System.in);

        for(int i = 0; i < Arr.length; i++)
        {
            for(int j = 0; j < Arr[0].length; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }
    }

    public void Display()
    {
        for(int i = 0; i < Arr.length; i++)
        {
            for(int j = 0; j < Arr[0].length; j++)
            {
                System.out.print(Arr[i][j] + "\t");
            }
            System.out.println();
        }
    }

    public void SwapRowsAndColumns()
    {
        int rows = Arr.length;
        int cols = Arr[0].length;

        for(int i = 0; i < rows - 1; i++)
        {
            for(int j = 0; j < cols; j++)
            {
                int temp = Arr[i][j];
                Arr[i][j] = Arr[i + 1][j];
                Arr[i + 1][j] = temp;
            }
        }

        for(int j = 0; j < cols - 1; j++)
        {
            for(int i = 0; i < rows; i++)
            {
                int temp = Arr[i][j];
                Arr[i][j] = Arr[i][j + 1];
                Arr[i][j + 1] = temp;
            }
        }

        System.out.println("Matrix after swapping consecutive rows and columns:");
        Display();
    }
}

class Assignment_3
{
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of rows:");
        int iRow = sobj.nextInt();

        System.out.println("Enter the number of columns:");
        int iCol = sobj.nextInt();

        Matrix mobj = new Matrix(iRow, iCol);
        mobj.Accept();

        System.out.println("Original matrix:");
        mobj.Display();

        mobj.SwapRowsAndColumns();
    }
}
