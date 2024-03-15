import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
        int sum_hol=0;
        int sum=0;
        int[] arr=new int[10];
        Scanner sc=new Scanner(System.in);
        for (int i=0;i<10;i++){
            arr[i]=sc.nextInt();
            if (i%2==0){
                sum_hol+=arr[i];
            }
            else{
                sum+=arr[i];
            }

        }
        if (sum>=sum_hol){
            System.out.printf("%d",sum-sum_hol);
        }
        else{
            System.out.printf("%d",sum_hol-sum);
        }
    }
}