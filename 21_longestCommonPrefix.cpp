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
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string x = strs[0];
        int cnt = 0;
        for(int i=1;i<strs.size();i++){
            int j=0,k=0;
            string y = "";
            while(j<x.size() && k<strs[i].size() && x[j]==strs[i][k]){
                y+=x[j];
                j++;
                k++;
            }
            x = y;
        }
        return x;
    }
};

int main(){
    
    return 0;
}