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

