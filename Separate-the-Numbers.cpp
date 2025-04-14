#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'separateNumbers' function below.
 *
 * The function accepts STRING s as parameter.
 */

void separateNumbers(string s)
{
    int maxLen = s.size() / 2;

    for (int len = 1; len <= maxLen; ++len)
    {
        string firstStr = s.substr(0, len);

        long long firstNum = stoll(firstStr);
        long long currentNum = firstNum;
        size_t pos = 0;

        while (pos < s.size())
        {
            string currentStr = to_string(currentNum);

            if (s.compare(pos, currentStr.size(), currentStr) != 0)
                break;

            pos += currentStr.size();
            ++currentNum;
        }

        if (pos == s.size())
        {
            cout << "YES " << firstNum << endl;
            return;
        }
    }

    cout << "NO" << endl;
}


void separateNumbers2(string s)
{
    int maxLen = s.size() / 2;

    for (int len = 1; len <= maxLen; ++len)
    {
        string firstStr = s.substr(0, len);
        long long firstNum = stoll(firstStr);
        long long currentNum = firstNum;

        string temp = firstStr;

        while (temp.size() < s.size())
        {
            ++currentNum;
            temp += to_string(currentNum);
        }

        if (temp == s)
        {
            cout << "YES " << firstNum << endl;
            return;
        }
    }

    cout << "NO" << endl;
}

