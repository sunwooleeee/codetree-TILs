import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int sum=0;
        int cnt=0;
        int[] arr=new int[5];
        for (int i=0;i<n;i++){
            for (int j=0;j<4;j++){
                arr[j]=sc.nextInt();
                sum+=arr[j];
            }
            if (sum>=240){
                System.out.print("pass\n");cnt+=1;
            }
            else{
                System.out.print("fail\n");
            }
            
            sum=0;
        }
        System.out.printf("%d",cnt);
    }
}