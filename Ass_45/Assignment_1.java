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

    public void Transpose()
    {
        int row = Arr.length;
        int col = Arr[0].length;
        int[][] transposed = new int[col][row];

        for(int i = 0;i < row;i++)
        {
            for(int j = 0;j < col;j++)
            {
                transposed[j][i] = Arr[i][j];

            }
        }
        System.out.println("Transpose of Matrix:");
        
        for(int i = 0; i < transposed.length;i++)
        {
            for(int j = 0; j < transposed[0].length;j++)
            {
                System.out.print(transposed[i][j]+ "\t");
            }
            System.out.println("\n");

        }

    }
}
class Assignment_1
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
        mobj.Transpose();


    }

}