import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
        Scanner sc=new Scanner(System.in);
        int a=10;
        int[] arr=new int[10];
        for (int i=0;i<10;i++){
            arr[i]=sc.nextInt();
            if (arr[i]>=250){
                a=i;
                break;
            }
        }
        int sum=0;
        for (int i=0;i<a;i++){
            sum+=arr[i];
        }
        System.out.printf("%d %.1f",sum,(double)sum/a);
    }
}