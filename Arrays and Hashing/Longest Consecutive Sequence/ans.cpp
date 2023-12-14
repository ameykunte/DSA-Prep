//https://leetcode.com/problems/longest-consecutive-sequence/

//init a set to store all the elements in nums. elems at start of a sequence dont have a previous element in the set - check for such elems.
//for each such elem, check if the next element is in the set. while it is, increment the length of the sequence. then, compare the length of the sequence with the longest sequence so far.

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> set(nums.begin(),nums.end());
        int longest = 0;

        for (auto i:set){
            if(!set.count(i-1)){
                int length = 1;
                while(set.count(i + length)){
                    ++length;
                }
                if(length>longest){
                    longest = length;
                }

            }
        }
        return longest;
        
    }
};