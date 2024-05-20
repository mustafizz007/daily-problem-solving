import java.util.Scanner;
public class A_Domino_piling
{
    public static void main(String[] args)
    {
        Scanner myObj = new Scanner(System.in);
        int a = myObj.nextInt();
        int b = myObj.nextInt();
        System.out.println((a*b) / 2);
        myObj.close();
    }    
}