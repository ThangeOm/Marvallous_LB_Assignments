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
        int i, j = 0;

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

        int i , j = 0;
        for(i = 0; i < Arr.length;i++)
        {
            for(j = 0;j < Arr.length;j++)
            {
                System.out.print(Arr[i][j]+ "\t");
            }
            System.out.println("\n");

        }
    }
    public int AddDiagonal()
    {
        int i = 0;
        int iSum = 0;

        for(i = 0;i < Arr.length;i++)
        {
            
            if(i < Arr[i].length)
            {
                iSum = iSum + Arr[i][i];
            }
            
        }
        return iSum;
    }
}

class Assignment_1
{
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of rows:");
        int iRow = sobj.nextInt();

        System.out.println("Enter the number of columns:");
        int iCol = sobj.nextInt();

        Matrix mobj = new Matrix(iRow,iCol);

        mobj.Accept();

        int iRet = mobj.AddDiagonal();
        mobj.Display();

        System.out.println("Sum of diagonal element is : "+iRet);

    }
}

