import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.function.*;
import java.util.regex.*;
import java.util.stream.*;
import static java.util.stream.Collectors.joining;
import static java.util.stream.Collectors.toList;

class Result {

    /*
     * Complete the 'separateNumbers' function below.
     *
     * The function accepts STRING s as parameter.
     */

    public static void separateNumbers(String s) {
        int maxLen = s.length() / 2;

        for (int len = 1; len <= maxLen; ++len) {
            String firstStr = s.substring(0, len);

            if (firstStr.startsWith("0"))
                continue;

            long first = Long.parseLong(firstStr);
            long current = first;
            int pos = 0;

            while (pos < s.length()) {
                String currentStr = Long.toString(current);

                if (pos + currentStr.length() > s.length() ||
                    !s.substring(pos, pos + currentStr.length()).equals(currentStr))
                    break;

                pos += currentStr.length();
                current++;
            }

            if (pos == s.length()) {
                System.out.println("YES " + first);
                return;
            }
        }

        System.out.println("NO");
    }


    public static void separateNumbers2(String s)
    {
        int maxLen = s.length() / 2;
        
        for (int len = 1; len <= maxLen; ++len) {
            String firstStr = s.substring(0, len);
        
            if (firstStr.startsWith("0"))
                continue;
        
            long first = Long.parseLong(firstStr);
            long current = first;
            int pos = 0;
        
            while (pos < s.length()) {
                String currentStr = Long.toString(current);
        
                if (pos + currentStr.length() > s.length() ||
                    !s.substring(pos, pos + currentStr.length()).equals(currentStr))
                    break;
        
                pos += currentStr.length();
                current++;
            }
        
            if (pos == s.length()) {
                System.out.println("YES " + first);
                return;
            }
        }
        
        System.out.println("NO");
    }    


    public static void separateNumbers3(String s) {
        String temp = "";
        String num = "";

        for (int i = 1; i <= s.length() / 2 && !s.equals(temp); ++i) {
            num = temp = s.substring(0, i);

            if (num.startsWith("0"))
                continue;

            for (int j = 1; temp.length() < s.length(); ++j) {
                temp += Long.toString(Long.parseLong(num) + j);
            }
        }

        System.out.println(s.equals(temp) ? "YES " + num : "NO");
    }
}


public class Solution {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));

        int q = Integer.parseInt(bufferedReader.readLine().trim());

        IntStream.range(0, q).forEach(qItr -> {
            try {
                String s = bufferedReader.readLine();

                Result.separateNumbers(s);
            } catch (IOException ex) {
                throw new RuntimeException(ex);
            }
        });

        bufferedReader.close();
    }
}
