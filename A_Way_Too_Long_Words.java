import java.util.Scanner;
public class A_Way_Too_Long_Words{
    public static void main(String[] args)
    {
        //System.out.println("Hello World");
        Scanner myObj = new Scanner(System.in);
       // Scanner myString = new Scanner(System.in);
        int n = myObj.nextInt();
        //scanner.nextLine();

        for (int i =0; i<n; i++)
        {
            String a = myObj.next();
            int l = a.length();
            if (l<=10) System.out.println("" +a);
            else 
            {
                System.out.println("" +a.charAt(0) + (a.length()-2 ) +a.charAt(a.length()-1));
            }

        }
        myObj.close();
        




    }

}