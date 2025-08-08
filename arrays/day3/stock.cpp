#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int minimumPrice = prices[0];

        for(int i = 0; i < prices.size(); i++){
            minimumPrice = min(minimumPrice, prices[i]);
            profit = max(profit, prices[i] - minimumPrice);
        }

        return profit;
    }
};