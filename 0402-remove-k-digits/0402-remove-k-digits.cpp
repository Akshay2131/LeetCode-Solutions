class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st;
        if(num.size()==k) 
            return "0";
        for(int i=0; i<num.size(); i++) {
            while(!st.empty() && k>0) {
                if(st.top()>num[i]) {
                    st.pop();
                    k--;
                }
                else
                    break;
            }
            if(!st.empty() || num[i]!='0')
                st.push(num[i]);
        }
        while(!st.empty()>0 && k--) 
            st.pop();
        stack<char> s;
        while(!st.empty()) {
            s.push(st.top());
            st.pop();
        }
        string res="";
        while(!s.empty()) {
            res+=s.top();
            s.pop();
        }
     return res.size()>0 ? res:"0";
    }
};