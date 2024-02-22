import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
        Scanner sc=new Scanner(System.in);
        boolean TF=true;
        for (int i=1;i<=5;i++){
            int n=sc.nextInt();
            if (n>=3 && n%3==0){
                continue;
            }
            TF=false;
        }
        if (TF){
            System.out.printf("1");
        }
        else{
            System.out.printf("0");
        }
    }
}