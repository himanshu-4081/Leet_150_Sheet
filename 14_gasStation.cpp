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
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();
        int gasSum = 0, costSum = 0;
        for(int i=0;i<n;i++){
            gasSum += gas[i];
            costSum += cost[i];
        }
        if(costSum > gasSum) return -1;
        int total = 0;
        int result = 0;
        for(int i=0;i<n;i++){
            total += gas[i]-cost[i];
            if(total<0){
                total = 0;
                result = i+1;
            }
        }
        return result;
    }
};


int main(){
    
    return 0;
}