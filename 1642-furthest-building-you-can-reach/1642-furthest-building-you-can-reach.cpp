class Solution {
public:
    int furthestBuilding(vector<int>& h, int bricks, int ladders) {
        priority_queue<int, vector<int>, greater<int>> p;
        for(int i=0; i<h.size()-1; ++i) {
            if(h[i+1]-h[i]>0) {
                p.push(h[i+1]-h[i]);
            }
            if(p.size()>ladders) {
                if(bricks-p.top()<0) return i;
                bricks-=p.top();
                p.pop();
            }
        }
     return h.size()-1;
    }
};