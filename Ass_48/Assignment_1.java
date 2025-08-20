import java.util.*;

class Pattern
{
    public void Pattern(String str)
    {
        for(int j = 0; j < str.length(); j++)
        {
            System.out.print(str.charAt(j) + " ");
        }
        System.out.println();
    }
}

class Assignment_1
{
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter a string : ");
        String str = sobj.nextLine();

        System.out.println("Enter how many times to repeat : ");
        int times = sobj.nextInt();

        Pattern pobj = new Pattern();

        // repeat printing from main
        for(int i = 0; i < times; i++)
        {
            pobj.Pattern(str);
        }
    }
}
