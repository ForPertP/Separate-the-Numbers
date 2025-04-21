Separate-the-Numbers
using System.CodeDom.Compiler;
using System.Collections.Generic;
using System.Collections;
using System.ComponentModel;
using System.Diagnostics.CodeAnalysis;
using System.Globalization;
using System.IO;
using System.Linq;
using System.Reflection;
using System.Runtime.Serialization;
using System.Text.RegularExpressions;
using System.Text;
using System;

class Result
{

    /*
     * Complete the 'separateNumbers' function below.
     *
     * The function accepts STRING s as parameter.
     */

    public static void separateNumbers(string s)
    {
        int maxLen = s.length / 2;
    
        for (int len = 1; len <= maxLen; ++len)
        {
            string firstStr = s.Substring(0, len);
    
            long firstNum = long.Parse(firstStr);
            long currentNum = firstNum;
            int pos = 0;
    
            while (pos < s.Length)
            {
                string currentStr = currentNum.ToString();
    
                if (s.Substring(pos, currentStr.Length != currentStr)
                    break;
    
                pos += currentStr.Length;
                ++currentNum;
            }
    
         if (pos == s.Length)
            {
                Console.WriteLine("YES " + first);
                return;
            }
        }

        Console.WriteLine("NO");
    }    


    public static void separateNumbers2(string s)
    {
        int maxLen = s.Length / 2;
    
        for (int len = 1; len <= maxLen; ++len)
        {
            string firstStr = s.Substring(0, len);
            long firstNum = Long.Parse(firstStr);
            long currentNum = firstNum;
    
            string temp = firstStr;
    
            while (temp.Length < s.Length)
            {
                ++currentNum;
                temp += currentNum.ToString();
            }
    
            if (temp == s)
            {
                Console.WriteLine("YES " + first);
                                  
                return;
            }
        }
    
        cout << "NO" << endl;
    }
                    
}



class Solution
{
    public static void Main(string[] args)
    {
        int q = Convert.ToInt32(Console.ReadLine().Trim());

        for (int qItr = 0; qItr < q; qItr++)
        {
            string s = Console.ReadLine();

            Result.separateNumbers(s);
        }
    }
}

