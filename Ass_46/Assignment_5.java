import java.util.*;

class Pattern
{
    public void Pattern(int iRow,int iCol)
    {
        int i = 0, j = 0;
            
        int iNo = 1;
        for(i = 0;i <iRow;i++)
        {
            for(j = 0; j <iCol;j++)
            {
                System.out.print(iNo + " ");
                iNo++;

            }

            System.out.println("\n");

        }
        
    }
}
class Assignment_5
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