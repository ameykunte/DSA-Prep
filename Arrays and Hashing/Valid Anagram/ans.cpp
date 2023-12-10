//https://leetcode.com/problems/valid-anagram/

//compare if strings are equal; then init a vector of chars and iterate over strings keeping a count of all letters - increm from s and decrem from t. 
//if all elems are 0, its an anagram. 

class Solution {               
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        vector<int> arr(26);
        for(int i=0; i<s.length(); i++){
            arr[s[i]-'a']++;
            arr[t[i]-'a']--;
        }

        for(auto i:arr){
            if(i != 0){
                return false;
            }
        }
        return true;
    }
};