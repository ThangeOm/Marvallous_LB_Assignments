import java.util.*;

class Pattern
{
    public void Pattern(String str)
    {
        for(int i = str.length(); i >= 1; i--)
        {
            for(int j = 0; j < i; j++)
            {
                System.out.print(str.charAt(j) + " ");
            }
            System.out.println();
        }
        for(int i = 2; i <= str.length(); i++)
        {
            for(int j = 0; j < i; j++)
            {
                System.out.print(str.charAt(j) + " ");
            }
            System.out.println();
        }
    }
}

class Assignment_4
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
