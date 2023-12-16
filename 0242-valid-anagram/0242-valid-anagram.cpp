class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> mp;
        for(int i=0; i<s.size(); ++i) mp[s[i]]++;
        for(int i=0; i<t.size(); ++i) {
            if(mp.count(t[i])) {
                mp[t[i]]--;
                if(mp[t[i]]==0) mp.erase(t[i]);
            }
            else return false;
        }
     return mp.empty();
    }
};