#include <iostream>
#include <limits.h>
using namespace std;
/*
Depends on what you want to do:
to read the value as an ascii code, you can write

char a = 'a';
int ia = (int)a; 
   note that the int cast is not necessary -- int ia = a would suffice 

to convert the character '0' -> 0, '1' -> 1, etc, you can write

char a = '4';
int ia = a - '0';
 check here if ia is bounded by 0 and 9 

Explanation:
a - '0' is equivalent to ((int)a) - ((int)'0'), which means the ascii values of the characters are subtracted from each other. Since 0 comes directly before 1 in the ascii table (and so on until 9), the difference between the two gives the number that the character a represents.

version : 2022061301
Refere:
https://stackoverflow.com/questions/5029840/convert-char-to-int-in-c-and-c
*/
class Soluction{
public:
    int myAtoi(string input){
        int sign = 1;
        int result =0;
        int index = 0;
        int  n = input.size();
        while(index <n && input[index] == ' '){ index++;}

        if(index <n && input[index] == '+'){
            sign = 1;
            index++;            
        }else if(index < n && input[index]== '-'){
            sign = -1;
            index++;
        }
        while(index < n && isdigit(input[index])){
            int digit = input[index]- '0';
            if((result> INT_MAX/10)|| (result == INT_MAX/10 && digit > INT_MAX % 10) ){
                return sign == 1 ? INT_MAX : INT_MIN;
            }
            result = 10 * result + digit;
            index++;
        }
        return sign * result;
    }

};


int main()
{
    Soluction s1;
    string ss = "4193 with words";
    cout<< s1.myAtoi(ss) <<endl;
    system("pause");
       return 0;
}