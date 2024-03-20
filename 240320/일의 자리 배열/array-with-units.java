import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
        Scanner sc=new Scanner(System.in);
        int[] arr=new int[11];
        arr[1]=sc.nextInt();
        arr[2]=sc.nextInt();
        System.out.printf("%d %d ",arr[1],arr[2]);
        for (int i=3;i<11;i++){
            arr[i]=(arr[i-2]+arr[i-1])%10;
            System.out.printf("%d ",arr[i]);
        }
    }
}