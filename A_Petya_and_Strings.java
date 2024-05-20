import java.util.Scanner;
public class A_Petya_and_Strings
{
    public static void main(String[] args)
    {
        Scanner myObj = new Scanner(System.in);
      
        String a = myObj.next();
        String b = myObj.next();

        char c[] = a.toCharArray();

        for (int i=0; i< a.length(); i++)
        {
            c[i] =  Character.toUpperCase(c[i]);
        }
        a = new String(c);

        char d[] = b.toCharArray();

        for (int i=0; i< b.length(); i++)
        {
            d[i] =  Character.toUpperCase(d[i]);
        }
        b = new String(d);

        int cmp = a.compareTo(b);
        if (cmp == 0) System.out.println(cmp);
        else if (cmp < 0) System.out.println("-1");
        else System.out.println("1");

        myObj.close();


    }
}