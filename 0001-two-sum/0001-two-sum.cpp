class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        int n=nums.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            int temp=target-nums[i];
            if(mp.find(temp)!=mp.end()){
                v.push_back(mp[temp]);
                v.push_back(i);
            }
            mp[nums[i]]=i;
        }
        return v;
        // Approach 1:
        // int l=0,r=n-1;
        // sort(nums.begin(),nums.end());
        // while(l<r){
        //     if(nums[l]+nums[r]<target){
        //         l++;
        //     }
        //     else if(nums[l]+nums[r]>target){
        //         r--;
        //     }
        //     else if(nums[l]+nums[r]==target){
        //         v.push_back(l);
        //         v.push_back(r);
        //         return v;
        //     }
        // }
        // return v;
        
        // Brute Force:
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         if((nums[i]+nums[j])==target){
        //             v.push_back(i);
        //             v.push_back(j);
                    
        //         }
        //     }
        // }
        // return v;

        
    }
};