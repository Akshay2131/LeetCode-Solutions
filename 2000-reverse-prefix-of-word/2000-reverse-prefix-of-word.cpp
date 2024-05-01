class Solution {
public:
    string reversePrefix(string word, char ch) {
        stack<char> stack;
        string result;
        int index = 0;
        while (index < word.length()) {
            stack.push(word[index]);
            if (word[index] == ch) {
                while (!stack.empty()) {
                    result.push_back(stack.top());
                    stack.pop();
                }
                index++;
                while (index < word.length()) {
                    result.push_back(word[index]);
                    index++;
                }
                return result;
            }
            index++;
        }
     return word;
    }
};