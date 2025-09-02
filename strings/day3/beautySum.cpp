#include <vector>
#include <string>

using namespace std;

class Solution
{
public:
    pair<int, int> minMax(vector<int> &freq)
    {
        int min = INT_MAX;
        int maxi = INT_MIN;
        for (auto v : freq)
        {
            if (v > 0 && v < min)
            {
                min = v;
            }

            maxi = max(maxi, v);
        }

        return {min, maxi};
    }

    int beautySum(string s)
    {
        int n = s.length();
        vector<int> freq(26, 0);

        int bSum = 0;

        for (int i = 0; i < n; i++)
        {
            fill(freq.begin(), freq.end(), 0);
            for (int j = i; j < n; j++)
            {
                int index = s[j] - 'a';
                freq[index]++;
                auto [mini, maxi] = minMax(freq);

                bSum += (maxi - mini);
            }
        }

        return bSum;
    }
};