import java.util.Scanner;
public class A_Word
{
    public static void main(String[] args)
    {
        Scanner myObj = new Scanner(System.in);

        int x=0, y=0;
        String a = myObj.next();
        for (int i=0; i< a.length(); i++)
        {
            if (a.charAt(i) >= 'a' && a.charAt(i) <='z') x++;
            else if (a.charAt(i) >='A' && a.charAt(i) <= 'Z') y++;

        }
        for (int i=0; i<a.length(); i++)
        {
            if (x>y) System.out.print(Character.toLowerCase(a.charAt(i)));
            else if (x==y) System.out.print(Character.toLowerCase(a.charAt(i)));
            else System.out.print(Character.toUpperCase(a.charAt(i)));
        }
        myObj.close();
    }
}