class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,bool> present,checked;
        for(int x:nums){
            present[x]=true;
        }
        int maxlen=0;
        for(int z:nums){
            if(!checked[z] and !present[z-1]){
                int currlen=0;
                while(present[z++]){
                    currlen++;
                }
                maxlen=max(currlen,maxlen);
            }
        }
        return maxlen;
        
        // unordered_map<int,bool> present;
        // for(int x:nums){
        //     present[x]=true;
        // }
        // int maxlen=0;
        // for(int z:nums){
        //     if(!present[z-1]){
        //         int currlen=0;
        //         while(present[z++]){
        //             currlen++;
        //         }
        //         maxlen=max(currlen,maxlen);
        //     }
        // }
        // return maxlen;
        
        // for(auto x:present){
        //     if(!present[x.first-1]){
        //         int currlen=0;
        //         int start=x.first;
        //         while(present[start]){
        //             currlen++;
        //             start++;
        //         }
        //         if(currlen>maxlen) maxlen=currlen;
        //     }
        // }
        // return maxlen;

    }
};