class Solution {
public:
    string pushDominoes(string d) {
        int prev = 0, r = -1, l = -1;
        while(prev < d.size() && d[prev] == '.') prev++;
        if(prev < d.size() && d[prev] == 'L') {
            int i = prev - 1;
            while(i >= 0) d[i] = 'L', i--;
        }
        for(int i = prev; i < d.size(); ++i) {
            string fill = "";
            if(i - prev > 1) {
                if(d[i] == 'L') {
                    if(d[prev] == 'L') fill = "L";
                    else fill = "RL";
                }
                else if(d[i] == 'R') {
                    if(d[prev] == 'R') fill = 'R';
                }
            }
            if(!fill.empty()) {
                int l = prev + 1, h = i - 1;
                char x = fill[0];
                char y = fill.size() == 1 ? x : fill[1];
                while(l <= h) {
                    if(l == h && fill.size() == 2) break;
                    d[l] = x;
                    d[h] = y;
                    l++;
                    h--;
                }
            }
            if(d[i] == 'L' || d[i] == 'R') prev = i;
            if(d[i] == 'R') r = i;
            if(d[i] == 'L') l = i;
        }
        int i = d.size() - 1;
        while(r > l && i > r) {
            d[i] = 'R';
            i--;
        }
     return d;
    }
};