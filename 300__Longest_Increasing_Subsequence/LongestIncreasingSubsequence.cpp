#include <iostream>
#include <iomanip>
#include <unordered_map>
#include <string>
#include <vector>
using namespace std;
/*


*/

class Solution{
public:
   int lengthOfLIS(vector<int>& nums) {
        vector<int> res;
        for(int i = 0 ; i <nums.size();i++){
            auto it = std::lower_bound(res.begin(),res.end(),nums[i]);
            if(it == res.end())  res.push_back(nums[i]);
            else
                *it =nums[i];
        }
        return res.size();
    }


};

int main(int argc, char ** argv)
{
    Solution s1;
    vector<int>  nums = {10,9,2,5,3,7,101,18};
    int iout = s1.lengthOfLIS(nums);
    cout<< "Result:"<< iout  << endl;


    system("pause");
    return 0;
}