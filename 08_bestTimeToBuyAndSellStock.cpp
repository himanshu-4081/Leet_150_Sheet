#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <list>
#include <queue>
#include <stack>
#include <numeric>
#include <cmath>
#include <climits>
#include <iomanip>
#include <bitset>
#include <cstring>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int buy = prices[0];
        int profit = 0;
        for(int i=0;i<n;i++){
            if(prices[i]<buy) buy = prices[i];
            else{
                profit += (prices[i] - buy);
                buy = prices[i];
            }
        }
        return profit;
    }
};

int main(){
    
    return 0;
}