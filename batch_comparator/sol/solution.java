import java.io.File;
import java.io.FileNotFoundException;
import java.io.PrintWriter;
import java.util.Scanner;

public class batch_comparator {
    public static void main(String args[]) throws FileNotFoundException {
        File file = new File("input.txt");
        Scanner scanner = new Scanner(file);
        int a = scanner.nextInt();
        int b = scanner.nextInt();
        PrintWriter writer = new PrintWriter("output.txt");
        writer.println("" + (a + b));
        writer.close();
   }
}

