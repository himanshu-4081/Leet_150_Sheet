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
    using ll = long long;
    int n;
    vector<ll> dp;
    ll f(int idx,vector<int>& nums){
        if(idx>=n-1) return 0;
        if(dp[idx]!=-1) return dp[idx];
        ll ans = INT_MAX;
        for(int i=1;i<=nums[idx];i++){
            ans = min(ans,f(idx+i,nums));
        }
        return dp[idx] = ans + 1;
    }
    int jump(vector<int>& nums) {
        n = nums.size();
        dp.resize(n,-1);
        return f(0,nums);
    }
};

int main(){
    
    return 0;
}