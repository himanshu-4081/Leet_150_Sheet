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
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        int j = 0;
        int x = -105;
        while(j<nums.size()){
            if(nums[j]!=x){
                x = nums[j];
                nums[i] = nums[j];
                j++;
                i++;
            }
            else j++;
        }
        return i;
    }
};

int main(){
    
    return 0;
}