#include <vector>
#include <algorithm>
#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    string frequencySort(string s) {
        string result = "";
        unordered_map<char, int> mpp;
        for (auto c : s)
            mpp[c]++;

        vector<vector<char>> freq(s.length() + 1);
        for (auto it : mpp) {
            freq[it.second].push_back(it.first);
        }

        for (int i = freq.size() - 1; i >= 0; i--) {
            for (char c : freq[i]) {
                result += string(i, c);
            }
        }

        return result;
    }
};