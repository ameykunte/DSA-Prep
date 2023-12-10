// https://leetcode.com/problems/valid-palindrome/

//clean the string, then iter and check if palindrome 
class Solution {
public:
    bool isPalindrome(string s) {
        string A;
        for(auto i:s){
            if(!isalnum(i)){
                continue;
            }else{
                A+=tolower(i);
            }
        }
        int start= 0;
        int end = A.length()-1;
        while(start<end){
            if(A[start]!=A[end]){return false;}
            start++;
            end--;     
        }
        return true;
    }
};