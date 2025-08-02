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

    public boolean ChkIdentity()
    {
        boolean Identity = true;
        
        for(int i = 0;i < Arr.length;i++)
        {
            for(int j = 0;j < Arr[0].length;j++)
            {
                if(i == j && Arr[i][j] != 1)
                {
                    Identity = false;
                }
                else if(i != j && Arr[i][j] != 0)
                {
                    Identity = false;
                }
            }
        }

        // if(Identity)
        // {
        //     System.out.print(true);

        // }
        // else
        // {
        //     System.out.print(false);

        // }

        return Identity;
    
    }
}
class Assignment_4
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
        System.out.println(mobj.ChkIdentity());

        mobj.ChkIdentity();


    }

}