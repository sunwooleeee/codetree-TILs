import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
        Scanner sc=new Scanner(System.in);
        int sum=0;
        int[] arr=new int[100];
        for (int i=0;i<=9;i++){
            arr[i]=sc.nextInt();
            sum+=arr[i];
        }
        System.out.printf("%d",sum);
    }
}