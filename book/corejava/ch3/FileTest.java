import java.util.*;
import java.nio.file.Paths;
import java.io.PrintWriter;
import java.io.IOException;

public class FileTest
{
    public static void main(String[] args) throws IOException
    {
        Scanner in      = new Scanner(Paths.get("../data/myfile.txt"), "UTF-8");
        PrintWriter out = new PrintWriter("../data/out.txt", "UTF-8");
        while(in.hasNext()){
            String  s  = in.nextLine();
            System.out.println(s);
            out.println(s);
        }
        out.close();
    }
}
