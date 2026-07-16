class Solution {
public:
    string sortSentence(string s) {
        vector<string> ans(10);
        string temp;
        int position;
        int count=0;
        int i = 0; // to iterate over the given sentence

        while (i < s.size()) {
            if (s[i] != ' ') {
                temp += s[i];
                i++;

            } else {
                position = temp[temp.size() - 1] - '0';
                temp.pop_back();
                ans[position] = temp;
                temp.clear();
                count++;
                i++;
            }
        }
        position = temp[temp.size() - 1] - '0';
        temp.pop_back();
        ans[position] = temp;
        temp.clear();
        count++;

        for (int i =1;i<=count;i++){
            temp+=ans[i];
            temp+=' ';

        }
        temp.pop_back();
        return temp;
    }
};