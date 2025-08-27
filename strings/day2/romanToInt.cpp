#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
    int value(char c)
    {
        switch (c)
        {
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
        }

        return -1;
    }

    int romanToInt(string s)
    {
        int answer = 0;
        int i;
        for (i = 0; i < s.length() - 1; i++)
        {
            int val = value(s[i]);
            if (s[i] == 'I' && (s[i + 1] == 'V' || s[i + 1] == 'X'))
            {
                answer -= val;
            }
            else if (s[i] == 'X' && (s[i + 1] == 'L' || s[i + 1] == 'C'))
            {
                answer -= val;
            }
            else if (s[i] == 'C' && (s[i + 1] == 'D' || s[i + 1] == 'M'))
            {
                answer -= val;
            }
            else
            {
                answer += val;
            }
        }
        int val = value(s[i]);
        answer += val;
        return answer;
    }
};