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
        for(i = 0;i < Arr.length;i++)
        {
            for(j = 0;j <Arr.length;j++)
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
    public int MaxDiagonal()
    {
        int i , j = 0;
        int iMax  = Arr[0][0];

        for(i = 0; i < Arr.length;i++)
        {
            for(j = 0;j < Arr.length;j++)
            {
                if(Arr[i][j] > iMax)
                {
                    iMax = Arr[i][j];
                }
            }
        }
        return iMax;
    }
}
class Assignment_3
{
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of rows:");
        int iRow = sobj.nextInt();

        System.out.println("Enter the number of columns: ");
        int iCol = sobj.nextInt();

        Matrix mobj = new Matrix(iRow,iCol);
        mobj.Accept();

        int iRet = mobj.MaxDiagonal();
        mobj.Display();
        System.out.println("Maximum number is :"+iRet);
        

    }
}