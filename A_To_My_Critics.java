import java.util.Scanner;
public class A_To_My_Critics{
    public static void main(String[] args)
    {
        Scanner myObj = new Scanner(System.in);
        int t = myObj.nextInt();
        while(t>0)
        {
            int a = myObj.nextInt();
            int b = myObj.nextInt();
            int c = myObj.nextInt();

            if (a+b >= 10) System.out.println("YES");
            else if (a+c >= 10) System.out.println("YES");
            else if (b+c >= 10) System.out.println("YES");
            else System.out.println("NO");
            t--;
        }
        myObj.close();
    }
}