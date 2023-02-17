class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;
        int n=nums.size();
        for(int j=0;j<n;j++){
            if(nums[j]!=0){
                swap(nums[j],nums[i]);
                i++;
            }
        }
        
        // while(i<=j and j<n){
        //     while(i!=0){
        //         i++;
        //     }
        //     while(j==0){
        //         j++;
        //     }
        //     swap(nums[i],nums[j]);
        // }
    }
};