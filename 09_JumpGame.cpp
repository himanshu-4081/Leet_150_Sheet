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
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int mx = 0;
        for(int i=0;i<nums.size();i++){
            if(mx<i) return false;
            if(mx>=n-1) return true;
            mx = max(mx,i+nums[i]);
        }
        return (mx<n-1);
    }
};

int main(){
    
    return 0;
}