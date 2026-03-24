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
    int removeElement(vector<int>& nums, int val) {
        int i = 0, j = 0;
        while(j<nums.size()){
            if(nums[j]==val) j++;
            else{
                nums[i] = nums[j];
                j++;
                i++;
            }
        }
        return i;
    }
};

int main(){
    
    return 0;
}