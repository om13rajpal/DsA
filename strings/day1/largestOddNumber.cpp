#include <vector>
#include <string>

using namespace std;

class Solution
{
public:
    string largestOddNumber(string num)
    {
        string result = "";
        int i;
        for (i = num.length(); i >= 0; i--)
        {
            int digit = num[i] - '0';
            if (digit % 2 != 0)
            {
                return num.substr(0, i + 1);
            }
        }

        return "";
    }
};