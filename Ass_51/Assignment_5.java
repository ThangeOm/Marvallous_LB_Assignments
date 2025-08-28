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

    public int SumOfBorderElements()
    {
        int sum = 0;
        int rows = Arr.length;
        int cols = Arr[0].length;

        for(int j = 0; j < cols; j++)
        {
            sum =sum + Arr[0][j];

        }
        for(int j = 0; j < cols; j++)
        {
            sum =sum +  Arr[rows - 1][j];

        }

        for(int i = 1; i < rows - 1; i++)
        {
            sum =sum + Arr[i][0];         
            sum =sum + Arr[i][cols - 1];
        }

        return sum;
    }
}

class Assignment_5
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
        mobj.Display();

        int borderSum = mobj.SumOfBorderElements();
        System.out.println("Sum of border elements: " + borderSum);
    }
}
