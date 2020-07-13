import java.util.*;
import java.io.*;
class Solution{
    public static void main(String args[])throws Exception{
        BufferedReader sc=new BufferedReader(new InputStreamReader(System.in));
        int test_cases=Integer.parseInt(sc.readLine());
        for(int t=1;t<=test_cases;t++){
            int n=Integer.parseInt(sc.readLine());
            String s[]=sc.readLine().split(" ");
            int arr[]=new int[n];
            for(int i=0;i<n;i++)
            arr[i]=Integer.parseInt(s[i]);
            int max=Integer.MIN_VALUE;
            int res=0;
            for(int i=0;i<n;i++){
                if(arr[i]>max){
                    if(i==n-1 || arr[i]>arr[i+1]){
                        res++;
                    }
                    max=arr[i];
                }
            }
            System.out.println("Case #"+t+": "+res);
        }
    }
}