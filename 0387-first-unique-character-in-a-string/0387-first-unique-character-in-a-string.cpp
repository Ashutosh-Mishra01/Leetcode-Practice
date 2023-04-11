class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> mp;
        int idx=0;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
            if(mp[s[idx]]>1){
                idx++;
                while(idx<s.size() && mp[s[idx]]>1){
                    idx++;
                }
                if(idx==s.size()) return -1;
            }
        }
        return idx;
        
        
        // for(int i=0;i<s.size();i++){
        //     mp[s[i]]++;
        // }
        // for(int i=0;i<s.size();i++){
        //     if(mp[s[i]]==1) return i;
        // }
        // return -1;
    }
};