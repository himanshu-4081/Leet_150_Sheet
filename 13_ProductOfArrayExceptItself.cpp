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
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> pre_mul(n),suff_mul(n);
        for(int i=0;i<n;i++){
            if(i==0) pre_mul[i] = nums[i];
            else pre_mul[i] = pre_mul[i-1] * nums[i];
        }
        for(int i=n-1;i>=0;i--){
            if(i==n-1) suff_mul[i] = nums[i];
            else suff_mul[i] = suff_mul[i+1] * nums[i];
        }
        vector<int> ans(n);
        ans[0] = suff_mul[1];
        ans[n-1] = pre_mul[n-2];
        for(int i=1;i<n-1;i++) ans[i] = pre_mul[i-1] * suff_mul[i+1];
        return ans;
    }
};

int main(){
    
    return 0;
}