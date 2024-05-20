import java.util.Scanner;

public class A_Presents {
    public static void main(String[] args) {
        Scanner myObj = new Scanner(System.in);
        int n = myObj.nextInt();
        //int x = -1;
        int a[] = new int[n];
        for (int i = 1; i <= n; i++) {
            int x = myObj.nextInt();

            a[x-1] = i;
        }
        for (int j = 0; j < n; j++) {
            System.out.print(a[j]);
            System.out.print(" ");
        }
        //myObj.close();

    }
}