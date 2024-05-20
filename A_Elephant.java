import java.util.Scanner;
public class A_Elephant{
    public static void main(String[] args){
        
        Scanner myObj = new Scanner(System.in);
        int x=-1,y=-1,z=-1,a=-1,b=-1;
        int n = myObj.nextInt();
        while (n!=0)
        {
            x = n/5;
            n = n - (x*5);
            y = n/4;
            n = n - (y*4);
            z = n/3;
            n = n - (z*3);
            a = n/2;
            n = n - (a*2);
            b = n/1;
            n = n - (b*1);
        }
        System.out.println(x+y+z+a+b);
        myObj.close();
    }
}