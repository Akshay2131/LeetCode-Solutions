class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        for(string s : strs) {
            string curr = s;
            sort(curr.begin(), curr.end());
            mp[curr].push_back(s);
        }
        vector<vector<string>> ans;
        for(auto i : mp) ans.push_back(i.second);
     return ans;
    }
};