import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
        Scanner sc=new Scanner(System.in);
        int cnt=0;
        int n=sc.nextInt();
        while (n<1000){
            if (n%2==0){
                n=3*n+1;
            }
            else{
                n=2*n+2;

            }
            cnt++;
        }
        System.out.printf("%d",cnt);
    }
}