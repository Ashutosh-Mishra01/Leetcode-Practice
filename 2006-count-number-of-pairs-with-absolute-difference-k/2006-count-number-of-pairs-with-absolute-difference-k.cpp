class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int cnt=0;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            int a=nums[i]+k;
            int b=nums[i]-k;
            cnt=cnt+mp[a];
            cnt=cnt+mp[b];
            mp[nums[i]]++;
        }
        return cnt;
    }
};