import java.io.BufferedReader;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;

public class stub {

    public static void main(String[] args) throws FileNotFoundException, IOException {
        FileInputStream in = new FileInputStream(args[1]);
        FileOutputStream out = new FileOutputStream(args[0]);

        PrintWriter writer = new PrintWriter(out, true);
        BufferedReader br = new BufferedReader(new InputStreamReader(in));
        String[] s = br.readLine().split(" ");
        int a = Integer.parseInt(s[0]);
        int b = Integer.parseInt(s[1]);
        writer.println("" + communication.add(a, b));
        writer.close();
        br.close();
    }
}
