import java.util.*;

class Pattern
{
    public void Pattern(String str)
    {
        int i = 0 , j = 0;
        for(i = str.length(); i >= 1; i--) 
        {
            for(j = 0; j < i; j++)      
            {
                System.out.print(str.charAt(j) + " ");
            }
            System.out.println();
        }
    }
}

class Assignment_2
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
