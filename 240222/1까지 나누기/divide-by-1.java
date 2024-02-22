import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int cnt=0;
       int i=1;
        while (n>1){
                cnt+=1;
                n=n/i;
                i++;

            }
        
        System.out.printf("%d",cnt);
    }
}