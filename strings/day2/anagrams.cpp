#include <vector>
#include <unordered_map>
#include <string>
using namespace std;

class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if (s.length() != t.length())
            return false;

        unordered_map<char, int> mpp;
        for (auto c : s)
            mpp[c]++;
        for (auto c : t)
            mpp[c]--;

        for (auto it : mpp)
        {
            if (it.second != 0)
                return false;
        }

        return true;
    }
};