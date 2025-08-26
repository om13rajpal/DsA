#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    string removeOuterParentheses(string s) {
        string cleaned = "";

        int o = 0;
        int in = 0;
        for (int i = 0; i < s.length(); i++) {
            if (o == 0 && s[i] == '(') {
                o++;
            } else {
                if (s[i] == '(') {
                    in++;
                    cleaned += s[i];
                } else {
                    if (in != 0 && s[i] == ')') {
                        in--;
                        cleaned += s[i];
                    } else {
                        o--;
                    }
                }
            }
        }

        return cleaned;
    }
};