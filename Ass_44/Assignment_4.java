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
            for(j = 0;j <Arr[i].length;j++)
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
    public void AddColumn()
    {
        int i , j = 0;
        int iSumCol = 0;

        System.out.print("Sum of Columns is:");
        for(j = 0; j < Arr[0].length;j++)
        {
            iSumCol = 0;

            for(i = 0;i < Arr.length;i++)
            {
                iSumCol = iSumCol + Arr[i][j];

            }
            System.out.print(" \t "+ iSumCol );
        }
        System.out.println("\n");

        
    }
}
class Assignment_4
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
        mobj.Display();
        mobj.AddColumn();
        

    }
}