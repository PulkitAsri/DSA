
import java.util.*;
import java.lang.*;
import java.io.*;

/**
 * B_Unique_Couples
 */
public class B_Unique_Couples {

  public static void main(String[] args) {
    try {
      Scanner scan = new Scanner(System.in);

      int test = scan.nextInt();
      while (test-- > 0) {
        long boys = scan.nextLong();
        long girls = scan.nextLong();
        long couples = girls * boys;
        System.out.println(couples);

      }
    } catch (Exception e) {
    }
  }
}