import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
        Scanner sc=new Scanner(System.in);
        int[] arr=new int[10];
        int sum=0;double cnt=0;
        int sums=0;
        for (int i=0;i<10;i++){
            arr[i]=sc.nextInt();
            if ((i+1)%2==0){
                sum+=arr[i];
            }
            if ((i+1)%3==0){
                sums+=arr[i];
                cnt+=1;
            }
        }
        System.out.printf("%d %.1f",sum,sums/cnt);
    }
}