//https://leetcode.com/problems/contains-duplicate/

// init a set, loop over elements and check if it exits in set - if yes, break; if not, insert.

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> set;
        for(auto i:nums){
            if(set.find(i) != set.end()){
                return true;
            }else{
                set.insert(i);
            }
        }
        return false;
    }
};