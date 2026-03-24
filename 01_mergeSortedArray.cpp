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
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = 0,j = 0,k=0;
        vector<int> v(m+n);
        while(i<m && j<n){
            if(nums1[i]<=nums2[j]){
                v[k] = nums1[i];
                i++;
            }
            else{
                v[k] = nums2[j];
                j++;
            }
            k++;
        }
        while(i<m) v[k++] = nums1[i++];
        while(j<n) v[k++] = nums2[j++];
        nums1 = v;
    }
};

int main(){

    Solution sol;

    vector<int> nums1 = {1,2,3,0,0,0};
    vector<int> nums2 = {2,5,6};
    int m = 3;
    int n = nums2.size();

    sol.merge(nums1,m,nums2,n);

    for(int i=0;i<nums1.size();i++) cout<<nums1[i]<<" ";

    return 0;
}