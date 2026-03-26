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
    int candy(vector<int>& ratings) {

       int n = ratings.size();

       vector<int>candies(n, 1);

       for(int i =1; i< n; i++){
         
         if(ratings[i] > ratings[i-1]){
            candies[i] = candies[i-1] + 1;
         }

       }
         for(int i =n-2; i>= 0; i--){

            if(ratings[i] > ratings[i+1]){
               candies[i] =  max(candies[i], candies[i+1] + 1);
            }
         }
       
       int totalcandies = 0;

       for(int i =0; i< n; i++){
         
         totalcandies += candies[i];
       }

       return totalcandies;
    }
};

int main(){
    
    return 0;
}