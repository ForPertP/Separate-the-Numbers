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


void separateNumbers3(const string& s)
{
    string temp = "";
    string num = "";

    for (int i = 1; i <= s.length() / 2 && temp != s; ++i) {
        num = temp = s.substr(0, i);

        if (num[0] == '0')
            continue;

        for (int j = 1; temp.length() < s.length(); ++j) {
            temp += to_string(stoll(num) + j);
        }
    }

    if (temp == s)
        cout << "YES " << num << endl;
    else
        cout << "NO" << endl;
}

        
int main()
{
    string q_temp;
    getline(cin, q_temp);

    int q = stoi(ltrim(rtrim(q_temp)));

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        separateNumbers(s);
    }

    return 0;
}


string ltrim(const string &str)
{
    string s(str);
    s.erase(
        s.begin(), find_if(s.begin(), s.end(), [](unsigned char ch) { return !isspace(ch); })
    );
    return s;
}


string rtrim(const string &str)
{
    string s(str);
    s.erase(
        find_if(s.rbegin(), s.rend(), [](unsigned char ch) { return !isspace(ch); }).base(), s.end()
    );
    return s;
}
