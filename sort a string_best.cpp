class Solution {
  public:
    string sortString(string &s) {
        // code here
        //sort(s.begin(),s.end());
        //return s;
        string ans;
        vector<int> count(26,0);
        
        for (int i =0;i<s.size();i++){
            count[s[i]-'a']++;
        }
        
        for (int i =0;i<26;i++){
            char c = 'a'+i;
            
            while (count[i]){
                ans+=c;
                count[i]--;
            }
            
        }
        return ans;
    }
};
