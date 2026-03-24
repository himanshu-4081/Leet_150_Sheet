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
    int majorityElement(vector<int>& nums) {
        int vote = 0;
        int value;
        for(int i=0;i<nums.size();i++){
            if(vote==0){
                vote++;
                value = nums[i];
            }
            else if(value==nums[i]) vote++;
            else vote--;
        }
        return value;
    }
};

int main(){
    
    return 0;
}