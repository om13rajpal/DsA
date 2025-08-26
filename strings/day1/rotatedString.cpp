#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.length() != goal.length())
            return false;

        string doubleString = s + s;

        if (doubleString.find(goal) != string::npos)
            return true;

        return false;
    }
};