import java.io.;
import java.util.;

public class Solution {

    public static void main(String[] args) {

        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();            
        String ans="";

        if(n>=1 && n<=100){
            if(n%2==1){
                ans = "Weird";
            }
            else{
                if(n>=2 && n<=5 ){
                   ans= "Not Weird";
                }
                else if (n>=6 && n<=20){
                    ans = "Weird";
                }
                else if(n>20) {
                    ans = "Not Weird";
                }
            }
        }
        else{
            ans="Invalid no! Enter a number between 1 and 100.";
        }

        System.out.println(ans);

    }
}
