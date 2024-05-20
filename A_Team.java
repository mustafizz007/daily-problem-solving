import java.util.Scanner;
public class A_Team
{
    public static void main(String[] args)
    {
        Scanner myObj = new Scanner (System.in);
        int n = myObj.nextInt();
        int cnt =0;
        for (int i=0; i<n; i++)
        {
            int a = myObj.nextInt();
            int b = myObj.nextInt();
            int c = myObj.nextInt();

            if (a == 1 && b == 1 || a==1 && c==1 || b ==1 && c==1) cnt++;

        }
        System.out.println(cnt);
        myObj.close();
    }
}