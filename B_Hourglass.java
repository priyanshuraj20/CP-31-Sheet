import java.util.*;
public class B_Hourglass{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0){
            int s = sc.nextInt();
            int k = sc.nextInt();
            int m = sc.nextInt();

            if(s<k) System.out.println(0);
            else if(s == k) System.out.println(Math.abs(m-k));
            else{
                if(k >= m) System.out.println(m);
                else{
                    System.out.println(Math.abs(m-k));
                }
            }
            
        }
    }
}