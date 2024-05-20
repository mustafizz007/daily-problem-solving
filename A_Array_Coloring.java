import java.util.Scanner;
public class A_Array_Coloring{
    public static void main(String[] args){
        
        Scanner myObj = new Scanner(System.in);

        int t = myObj.nextInt();

        while (t>0)
        {
            int n = myObj.nextInt();
            int a[] = new int[n];

            for (int i=0; i<n; i++)
            {
                a[i] = myObj.nextInt();
            }
            int s =0;
            for (int i=0; i<n; i++)
            {
                s = s + a[i];
            }
            if (s%2==0) System.out.println("YES");
            else System.out.println("NO");
            t--;

        }



        myObj.close();
    }
}