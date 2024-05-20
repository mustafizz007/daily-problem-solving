import java.util.Scanner;
public class A_Wrong_Subtraction
{
    public static void main(String[] args)
    {
        Scanner myObj = new Scanner(System.in);
        int n = myObj.nextInt();
        int k = myObj.nextInt();

        while(k>0)
        {
            if (n%10 == 0) 
            {
                n = n/10;
            }
            else 
            {
                n =n-1;
            }
            k--;
        }
        System.out.println(n);
       // myObj.close();

    }
}
