import java.util.*;

public class InTest
{
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        System.out.println("What's your name?");
        String name = in.nextLine();

        System.out.println("How old are you?");
        int    age  = in.nextInt();

        System.out.printf("hello, %s, next year, you'll be %d\n", name, age+1);
    }
}
