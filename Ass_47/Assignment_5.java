import java.util.*;

class Pattern
{
    public void Pattern(int iRow,int iCol)
    {
        int i = 0, j = 0;
        
        for(i = 1;i <iRow;i++)
        {
            for(j = 1; j <= iCol;j++)
            {
                System.out.print(i + " ");   
            }
            System.out.println();

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