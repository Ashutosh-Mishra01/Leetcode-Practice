class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string> v;
        unordered_map<char,int> minFreq;
        for(char ch='a';ch<='z';ch++){
            minFreq[ch]=1000;
        }
        for(auto x:words){
            unordered_map<char,int> freq;
            for(auto z:x){
                freq[z]++;
            }
            for(char ch='a';ch<='z';ch++){
                // below line resets the freq of ch of word in
                // each iteration if it is not present
                minFreq[ch]=min(minFreq[ch],freq[ch]);
            }
        }
        for(char ch='a';ch<='z';ch++){
            while(minFreq[ch]--){
                v.push_back(string(1,ch));
            }
        }
        return v;
    }
};