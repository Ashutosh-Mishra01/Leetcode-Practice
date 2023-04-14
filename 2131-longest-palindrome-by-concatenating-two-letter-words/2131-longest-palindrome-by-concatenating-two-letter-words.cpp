class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        unordered_map<string,int> mp;
        for(auto x:words){
            mp[x]++;
        }
        int cnt=0; bool flag=0;
        for(int i=0;i<words.size();i++){
            if(words[i][0]!=words[i][1]){
                string s="";
                s+=words[i][1];
                s+=words[i][0];
                if(mp.find(s)!=mp.end()){
                    cnt+=(4*min(mp[words[i]],mp[s]));
                    mp.erase(words[i]);
                    mp.erase(s);
                }
                
            }
            else if(words[i][0]==words[i][1]){
                if(mp[words[i]]%2==0){
                    cnt+=(2*mp[words[i]]);
                }
                else{
                    if(flag==0){
                        cnt+=(2*mp[words[i]]);
                        flag=1;
                    }
                    else{
                        cnt+=(2*(mp[words[i]]-1));
                    }
                }
                mp.erase(words[i]);
            }
        }
        return cnt;
    }
};