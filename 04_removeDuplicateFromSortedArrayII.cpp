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

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if(n<=2) return n;
        int i=2, j=2;
        while(j<n){
            if(nums[j]==nums[i-1] && nums[j]==nums[i-2]) j++;
            else{
                nums[i] = nums[j];
                i++;
                j++;
            }
        }
        return i;
    }
};

using namespace std;

int main(){
    
    return 0;
}