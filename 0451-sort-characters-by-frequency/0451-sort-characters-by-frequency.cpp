class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> mp;
        string ans = "";
        for(char c: s) mp[c]++;
        vector<string> bucket(s.size()+1, "");
        for(auto& i: mp) bucket[i.second].append(i.second, i.first);
        for(int i=s.size(); i>=0; --i)
            if(!bucket[i].empty()) ans+=bucket[i];
     return ans;
    }
};