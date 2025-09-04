#include <vector>
#include <string>

using namespace std;

class Solution
{
public:
    string countAndSay(int n)
    {
        string rle;
        for (int i = 1; i <= n; i++)
        {
            if (i == 1)
            {
                rle = "1";
            }
            else
            {
                string old = rle;
                rle = "";
                char current = old[0];
                int count = 0;
                for (auto c : old)
                {
                    if (c == current)
                    {
                        count++;
                    }
                    else
                    {
                        rle += to_string(count);
                        rle += current;

                        current = c;
                        count = 1;
                    }
                }

                rle += to_string(count);
                rle += current;
            }
        }

        return rle;
    }
};