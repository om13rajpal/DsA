#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        string word = strs[0];
        if (word == "")
            return "";

        int j;
        for (int i = 1; i < strs.size(); i++)
        {
            for (j = 0; j < strs[i].length(); j++)
            {
                if (j >= word.length())
                    break;
                if (strs[i][j] != word[j])
                {
                    word = word.substr(0, j);
                    break;
                }
            }
            word = word.substr(0, j);
        }

        return word;
    }
};