import java.io.*;

public class Solution {

    public static void main(String[] args) throws IOException{
        BufferedReader scan = new BufferedReader(new InputStreamReader(System.in));
        int i = Integer.parseInt(scan.readLine());
        double d = Double.parseDouble(scan.readLine());
        String s = scan.readLine();

        System.out.println("String: " + s);
        System.out.println("Double: " + d);
        System.out.println("Int: " + i);
    }
}
