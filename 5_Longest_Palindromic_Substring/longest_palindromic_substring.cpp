#include <iostream>

using namespace std;
/*
version : 2022061301
Refere:
https://leetcode.com/problems/longest-palindromic-substring/discuss/2923/Simple-C%2B%2B-solution-(8ms-13-lines)
*/

string longestPalindrome(string s){
    if(s.empty()) return "";
    if(s.size() == 1) return s;
    int min_start = 0, max_len =1;
    for(int i =0; i<s.size();){
        if(s.size() -i <= max_len/2) break;
        int j =i, k=i;
        while (k<s.size()-1 && s[k+1]==s[k]) ++k;
        i =k+1;
        while(k<s.size()-1 && j >0 && s[k+1] ==s[j-1]){ ++k; --j;}
        int new_len = k -j +1;
        if(new_len > max_len) {min_start = j; max_len= new_len;}
    }
    return s.substr(min_start, max_len);
}

int main()
{
    string ss = "babad";
    cout<< longestPalindrome( ss) <<endl;
    system("pause");
       return 0;
}