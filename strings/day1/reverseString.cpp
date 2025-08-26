#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
    string reverseWords(string s)
    {
        string temp;
        for (int i = 0; i < s.size(); i++)
        {
            if (!(s[i] == ' ' && (temp.empty() || temp.back() == ' ')))
            {
                temp.push_back(s[i]);
            }
        }
        if (!temp.empty() && temp.back() == ' ')
        {
            temp.pop_back();
        }
        reverse(temp.begin(), temp.end());

        int start = 0;
        for (int i = 0; i <= temp.length(); i++)
        {
            if (temp[i] == ' ')
            {
                reverse(temp.begin() + start, temp.begin() + i);
                start = i + 1;
            }
        }

        reverse(temp.begin() + start, temp.end());

        return temp;
    }
};