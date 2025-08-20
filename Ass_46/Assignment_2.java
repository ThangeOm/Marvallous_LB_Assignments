import java.util.*;

class Pattern
{
    public void Pattern(int iRow,int iCol)
    {
        int i = 0, j = 0;

        for(i = 0;i <iRow;i++)
        {
            char ch ;
            if(i % 2 == 0 )
            {
                ch = 'A';
            }
            else
            {
                ch = 'a';
            }
            for(j = 0; j <iCol;j++)
            {
                System.out.print(ch + " ");
                ch++;

                if((i % 2 == 0 && ch > 'Z') || (i % 2 != 0 && ch > 'z'))
                {
                    if(i % 2 == 0)
                    {
                        ch = 'A';
                    }
                    else
                    {
                        ch = 'a';
                    }
                }
                
            }
            System.out.println("\n");

        }
        
    }
}
class Assignment_2
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