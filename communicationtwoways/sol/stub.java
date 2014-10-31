import java.io.BufferedReader;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.InputStreamReader;
import java.io.PrintWriter;

public class stub {
    private static PrintWriter writer;
    private static BufferedReader br;

    public static int provide_random_number() throws Exception {
        writer.println("-1");
        return Integer.parseInt(br.readLine());
    }

    public static void main(String[] args) throws Exception {
        FileInputStream in = new FileInputStream(args[1]);
        FileOutputStream out = new FileOutputStream(args[0]);

        writer = new PrintWriter(out, true);
        br = new BufferedReader(new InputStreamReader(in));
        String[] s = br.readLine().split(" ");
        int a = Integer.parseInt(s[0]);
        int b = Integer.parseInt(s[1]);
        writer.println("" + communicationtwoways.add(a, b));
        writer.close();
        br.close();
    }
}
