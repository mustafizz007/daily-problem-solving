import java.util.Scanner;
public class A_Word_Capitalization
{
    public static void main(String[] args)
    {
        Scanner myObj = new Scanner(System.in);

        String a =  myObj.next();

        if (a.charAt(0) >='a' && a.charAt(0)<='z') 
        {
            char x = (char) (a.charAt(0) - 32);
            String y = x + a.substring(1);
            a = y; 
            
        }
        System.out.println(a);

        myObj.close();

    }
}