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
    int hIndex(vector<int>& citations) {
        int n = citations.size();
        int arr[n+1];
        memset(arr,0,sizeof(arr));
        for(int ele : citations){
            if(ele>=n) arr[n]++;
            else arr[ele]++;
        }
        for(int i=n-1;i>=0;i--){
            arr[i] += arr[i+1];
        }
        int ans = 0;
        for(int i=0;i<=n;i++){
            if(arr[i]>=i) ans = max(ans,i);
        }
        return ans;
    }
};

int main(){
    
    return 0;
}