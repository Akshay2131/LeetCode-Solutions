class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int, int> map;
        for (int i : arr) {
            map[i]++;
        }

        vector<int> frequencies;
        for (auto it : map) {
            frequencies.push_back(it.second);
        }

        sort(frequencies.begin(), frequencies.end());

        int elementsRemoved = 0;

        for (int i = 0; i < frequencies.size(); i++) {
            elementsRemoved += frequencies[i];

            if (elementsRemoved > k) {
                return frequencies.size() - i;
            }
        }
     return 0;
    }
};