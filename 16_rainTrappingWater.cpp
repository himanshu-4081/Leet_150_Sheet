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
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> prefixMax(n);
        vector<int> suffixMax(n);
        prefixMax[0] = -1;
        for(int i=1;i<n;i++){
            prefixMax[i] = max(prefixMax[i-1],height[i-1]);
        }
        for(int i=n-2;i>=0;i--){
            suffixMax[i] = max(suffixMax[i+1],height[i+1]);
        }
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            arr[i] = min(prefixMax[i],suffixMax[i]);
        }
        int water = 0;
        for(int i=0;i<n;i++) if(height[i]<arr[i]) water += (arr[i] - height[i]);
        return water;
    }
};

int main(){
    
    return 0;
}