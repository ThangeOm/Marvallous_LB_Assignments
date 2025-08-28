import java.util.*;

class Pattern
{
    public void Pattern(String str)
    {
        int iNo = str.length();
        for(int i = 0; i < iNo - 1; i++)
        {
            for(int j = 0; j < iNo; j++)
            {
                if(j <= i)
                {
                    System.out.print(str.charAt(j) + " ");

                }
                else
                {
                    System.out.print(" * ");
                }
            }
            System.out.println();
        }
      
    }
}

class Assignment_1
{
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter a string : ");
        String str = sobj.nextLine();

        Pattern pobj = new Pattern();
        pobj.Pattern(str);
    }
}
