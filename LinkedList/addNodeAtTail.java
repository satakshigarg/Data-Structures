import java.io.*;
import java.util.*;

public class addTail {
  public static void main(String args[])throws IOException {
    InputStreamReader read = new InputStreamReader(System.in);
    BufferedReader in = new BufferedReader(read);
    int data = Integer.parseInt(in.readLine());
    LinkedList<Integer> val = new LinkedList<>();
    val.add(data);
    System.out.println(val);
  }
  
}
