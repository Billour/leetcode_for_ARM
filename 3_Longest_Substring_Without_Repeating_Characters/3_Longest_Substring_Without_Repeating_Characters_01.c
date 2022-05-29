#include <stdio.h>
#include <stdlib.h>
/*

version:2022052901
Reference:    https://leetcode.com/problems/longest-substring-without-repeating-characters/discuss/1738/4ms-C-code-in-12-lines
*/

int lengthOfLongstSubstring(char *s)
{
    int len=0;
    char* end =s, *temp;
    char* addressTable[128]={NULL};
    while(*end){
        temp=addressTable[*end]= end;
        addressTable[*end]=end;
        if(temp>=s){
            len=end-s>len?end-s:len;
            s=temp+1;            
        }end++;
    }
    len=end-s>len?end-s:len;
    return len;
}
int main()
{


        system("pause");
        return 0;
}