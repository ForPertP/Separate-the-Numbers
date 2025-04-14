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
        string first_str = s.substr(0, len);

        long long first = stoll(first_str);
        long long current = first;
        size_t pos = 0;

        while (pos < s.size())
        {
            string currentStr = to_string(current);

            if (s.compare(pos, currentStr.size(), currentStr) != 0)
                break;

            pos += currentStr.size();
            ++current;
        }

        if (pos == s.size())
        {
            cout << "YES " << first << endl;
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
        string first_str = s.substr(0, len);
        long long first = stoll(first_str);
        string temp = first_str;

        long long next = first;
        while (temp.length() < s.length())
        {
            ++next;
            temp += to_string(next);
        }

        if (temp == s)
        {
            cout << "YES " << first << endl;
            return;
        }
    }
    cout << "NO" << endl;
}


void separateNumbers(string s)
{
    std::string temp;
    std::string num;
    
    for (int i = 1; i <= s.size()/2 && s != temp; ++i)
    {
        num = temp = s.substr(0, i);
        
        for (int j = 1; temp.size() < s.size(); ++j)
        {
            temp += to_string(stol(num) + j);
        }
    }

    cout << (s == temp ? "YES " + num : "NO") << endl;
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

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), [](unsigned char ch) { return !isspace(ch); })
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), [](unsigned char ch) { return !isspace(ch); }).base(),
        s.end()
    );

    return s;
}
