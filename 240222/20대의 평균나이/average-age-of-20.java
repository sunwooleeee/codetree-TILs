import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
        Scanner sc=new Scanner(System.in);
        int sum=0;
        int n=0;
        while (true){
            int age=sc.nextInt();
            if ((age>=20) && (age<=29)){
                n++;
                sum+=age;
                continue;
            }
            break;
        }
        System.out.printf("%.1f",(double)(sum)/n);
    }
}