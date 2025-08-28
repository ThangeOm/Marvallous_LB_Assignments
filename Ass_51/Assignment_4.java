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

    public int Trace()
    {
        int trace = 0;
        int n = Math.min(Arr.length, Arr[0].length);
        for(int i = 0; i < n; i++)
        {
            trace = trace + Arr[i][i];
        }
        return trace;
    }
    public double Normal()
    {
        int sumSquares = 0;
        for(int i = 0; i < Arr.length; i++)
        {
            for(int j = 0; j < Arr[0].length; j++)
            {
                sumSquares =sumSquares + Arr[i][j] * Arr[i][j];
            }
        }
        return Math.sqrt(sumSquares);
    }
}

class Assignment_4
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

        int trace = mobj.Trace();
        double normal = mobj.Normal();

        System.out.println("Trace of the matrix: " + trace);
        System.out.println("Normal of the matrix: " + normal);
    }
}
