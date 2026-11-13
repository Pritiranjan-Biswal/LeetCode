class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int  n=nums.size();
        int total_sum=0;
        for(int i=0; i<n; i++) {
            total_sum+=nums[i];
        }
        
        int sum=0;
        for(int i=0; i<n; i++) {
            
           int  rest=total_sum-sum-nums[i];
            if(sum==rest) {
                return i;
            }
            sum+=nums[i];
        }
        return -1;
    }
};