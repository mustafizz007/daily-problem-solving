import java.util.Scanner;

public class A_Stones_on_the_Table {
    public static void main(String[] args) {

        int c =0;

        Scanner myObj = new Scanner(System.in);

        int n = myObj.nextInt();

     
        String a = myObj.next();


        for (int i = 0; i < n-1; i++) {

            if (a.charAt(i) == a.charAt(i+1)) {
                c++;
            }
        }
        System.out.println(c);

        myObj.close();
    }
}