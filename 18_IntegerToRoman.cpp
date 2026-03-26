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
    string f(int x,int rank){
        string ans = "";
        if(x<4){
            for(int i=1;i<=x;i++){
                if(rank==1) ans+='I';
                else if(rank==2) ans+='X';
                else if(rank==3) ans+='C';
                else if(rank==4) ans+='M';
            }
            return ans;
        }
        if(x==4){
            if(rank==1) return "IV";
            if(rank==2) return "XL";
            if(rank==3) return "CD";
        }
        else if(x==9){
            if(rank==1) return "IX";
            if(rank==2) return "XC";
            if(rank==3) return "CM";
        }
        if(x>4){
            if(rank==1) ans += "V";
            if(rank==2) ans += "L";
            if(rank==3) ans += "D";
            for(int i=6;i<=x;i++){
                if(rank==1) ans+='I';
                else if(rank==2) ans+='X';
                else if(rank==3) ans+='C';
                else if(rank==4) ans+='M';
            }
            return ans;
        }
        return ans;
    }
    string intToRoman(int num) {
        string y = to_string(num);
        int rank = y.size();
        string ans = "";
        for(int i=0;i<y.size();i++){
            ans += f(y[i]-'0',rank-i);
        }
        return ans;
    }
};

int main(){
    
    return 0;
}