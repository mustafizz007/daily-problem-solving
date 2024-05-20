import java.util.Scanner;

public class A_Bit {
    public static void main(String[] args) 
    {
        Scanner myObj = new Scanner(System.in);
        int n = myObj.nextInt();
        int c = 0;

        for (int i = 0; i < n; i++) 
        {

            String a = myObj.next();
            if (a.charAt(1) == '+') c++;
            else if (a.charAt(1) == '-') c--;
        }
        System.out.println(c);
        myObj.close();
    }

}
