class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int n=s.size(), i=0;
        int count=0;
        while(i<n) {
            if(count==0 && s[i]==')') 
                s[i]='@';
            else if(s[i]=='(')
                count++;
            else if(s[i]==')')
                count--;
            i++;
        }
        i=n-1;
        count=0;
        while(i>=0) {
            if(count==0 && s[i]=='(') 
                s[i]='@';
            else if(s[i]==')')
                count++;
            else if(s[i]=='(')
                count--;
            i--;
        }
        i=0;
        string res="";
        while(i<n) {
            if(s[i]!='@')
            res+=s[i];
            i++;
        }
     return res;
    }
};