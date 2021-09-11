
import java.util.*;
import java.lang.*;
import java.math.BigInteger;
import java.io.*;

/**
 * E_Money_double_in_21_days_
 */
public class E_Money_double_in_21_days_ {

  public static void main(String[] args) {
    try {
      Scanner in = new Scanner(System.in);

      int q = in.nextInt();

      for (int i = 0; i < q; i++) {
        String vStr = in.next();
        BigInteger v = new BigInteger(vStr);
        BigInteger x = ((((v.multiply(new BigInteger("46"))).subtract(new BigInteger("175"))).sqrt())
            .add(new BigInteger("3")));

        if (x.mod(new BigInteger("46")).compareTo(new BigInteger("0")) == 0)
          System.out.println(x.divide(new BigInteger("46")));
        else
          System.out.println(x.divide(new BigInteger("46")).add(new BigInteger("1")));

      }

      in.close();
    } catch (Exception e) {
    }
  }
}