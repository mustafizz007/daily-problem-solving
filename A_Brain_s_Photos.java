import java.util.Scanner;

public class A_Brain_s_Photos {
    public static void main(String[] args) {
        Scanner myObj = new Scanner(System.in);

        int n = myObj.nextInt();
        int m = myObj.nextInt();
        int f = 0;

        char a[][] = new char[n][m];

        for (int i = 0; i < n; i++) {
            // String input = myObj.next();
            for (int j = 0; j < m; j++) {
                a[i][j] = myObj.next().charAt(0);
            }
        }
        // for (int i = 0; i < n; i++) {
        // for (int j = 0; j < m; j++) {
        // System.out.print(a[i][j] + " ");
        // }
        // System.out.println();
        // }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (a[i][j] != 'W' && a[i][j] != 'B' && a[i][j] != 'G') {
                    f = 1;
                    break;
                }

            }
        }
        if (f == 1)
            System.out.println("#Color");
        else
            System.out.println("#Black&White");

        myObj.close();

    }

}
