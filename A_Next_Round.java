import java.util.Scanner;
public class A_Next_Round
{
    public static void main(String[] args)
    {
        Scanner myObj = new Scanner(System.in);
        int n = myObj.nextInt();
        int k = myObj.nextInt();
        int a[] = new int[n];
        int c=0;
        for (int i=0; i<n; i++)
        {
            a[i] = myObj.nextInt();
        }
        for (int i=0; i<n; i++)
        {
            if (a[i] >= a[k-1] && a[i] > 0) c++;
        }
        System.out.println(c);
        myObj.close();

    }
}