import java.util.Scanner;

public class A_Boy_or_Girl {
    public static void main(String[] args) {

        Scanner myObj = new Scanner(System.in);

        int x = 0, count = 0;

        String a = myObj.next();

        for (int i = 0; i < a.length(); i++) {
            for (int j = i - 1; j >= 0; j--) {
                if (a.charAt(i) == a.charAt(j)) {
                    x = 1;
                    break;
                }
            }
            if (x == 0) {
                count++;
            }
            x = 0;
        }
        if (count % 2 == 0)
            System.out.println("CHAT WITH HER!");
        else
            System.out.println("IGNORE HIM!");
        myObj.close();
    }
}