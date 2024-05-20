import java.util.Scanner;
public class A_Beautiful_Matrix
{
    public static void main(String[] args)
    {
        Scanner myObj = new Scanner(System.in);

        int x = -1,y= -1;

        int a[][] = new int[6][6];
        for (int i=1; i<=5; i++)
        {
            for (int j=1; j<=5; j++)
            {
                a[i][j] = myObj.nextInt();
            }
        }
        for (int i=1; i<=5; i++)
        {
            for (int j=1; j<=5; j++)
            {
                if (a[i][j] == 1)
                {
                    x = i;
                    y = j;
                }
            }
        }
        System.out.println(Math.abs(3-x) + Math.abs(3-y));
        myObj.close();


    }
      
}