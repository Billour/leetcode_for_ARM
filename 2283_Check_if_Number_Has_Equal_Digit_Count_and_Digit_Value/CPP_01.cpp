#include <iostream>
#include <iomanip>
#include <unordered_map>
#include <string>

using namespace std;
/*

Refere : https://leetcode.com/problems/check-if-number-has-equal-digit-count-and-digit-value/discuss/2083791/Confusing-yet-simple-Hashmap-Solution-C%2B%2B
*/

class Solution{
public:
    bool digitCount(string num){
        unordered_map<int, int> mpp;
        int  n = num.length();
        for(auto it : num)
        {
            int x = it - '0';
           /* cout<<"x:"<< x <<endl;
            cout<<"mpp[x]:"<< mpp[x] <<endl;
            */
            mpp[x]++;            
        }
        
        for(int i =0; i<n ;i++)
        {
            int x =num[i] - '0';
            if(mpp[i] != x)
            {
                return false;
            }
        }

        return true;
    }


};

int main(int argc, char ** argv)
{
    Solution s1;
    string  sPut= "030";//"1210"
    bool b_out = s1.digitCount(sPut);
    cout<< "Result:"<< b_out  << endl;


    system("pause");
    return 0;
}