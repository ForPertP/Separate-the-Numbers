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
