#include <vector>
#include <string>

using namespace std;

class Solution
{
public:
    int minAddToMakeValid(string s)
    {
        int moves = 0;
        int open = 0;

        for (auto c : s)
        {
            if (c == '(')
            {
                open++;
            }
            else
            {
                if (open > 0)
                {
                    open--;
                }
                else
                {
                    moves++;
                }
            }
        }

        moves += open;

        return moves;
    }
};