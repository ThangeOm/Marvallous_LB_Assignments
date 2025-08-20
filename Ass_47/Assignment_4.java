import java.util.*;

class Pattern
{
    public void Pattern(int iRow,int iCol)
    {
        int i = 0, j = 0;
        
        for(i = 0;i <iRow;i++)
        {
            for(j = 1; j <= iCol;j++)
            {
                if(j % 2 == 1)
                {
                    System.out.print(" * ");
                }
                else
                {
                    System.out.print(" # ");

                }
                
            }
            System.out.println();

        }
        
    }
}
class Assignment_4
{
    public static void main(String[]args)
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the number of rows :");
        int iRow = sobj.nextInt();

        System.out.println("Enter the number of columns :");
        int iCol = sobj.nextInt(); 

        Pattern pobj = new Pattern();
        pobj.Pattern(iRow,iCol);
    }
}