// https://leetcode.com/problems/group-anagrams

// take a map and iter all elems so that <aet,["tea"]> and <aet,["ate"]> (all anagrams at a single key)
//  then for each key (e.g aet) push all the vals in a vector and return vector
class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        unordered_map<string, vector<string>> mp;
        vector<vector<string>> ans;
        for (auto s : strs)
        {
            string word = s;
            sort(word.begin(), word.end());
            mp[word].push_back(s);
        }
        for (auto s : mp)
        {
            ans.push_back(s.second);
        }
        return ans;
    }
};