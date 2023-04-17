class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>> ans(1);
        int n=nums.size();
        for (int i=0;i<n;i++){
            int ins=0;
            for (int j=0;j<ans.size();j++){
                int ch=0;
                for (int k=0;k<ans[j].size();k++){
                    if (ans[j][k]==nums[i]){
                        ch=1;
                    }
                }
                if (ch==0){
                    ans[j].push_back(nums[i]);
                    ins=1;
                    break;
                }
            }
            if (ins==0){
                ans.push_back({nums[i]});
            }
        }
        return ans;
    }
};