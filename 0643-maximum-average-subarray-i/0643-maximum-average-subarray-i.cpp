class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum=0;
        double maxsum=0;
        int n=nums.size();
        if(n==1) return nums[0];
        
        for(int i=0; i<k; i++) {
            sum+=nums[i];
            maxsum=sum;
        }

        for(int i=k; i<nums.size(); i++) {
            sum=sum-nums[i-k]+nums[i];
            
            maxsum=max(sum, maxsum);
        }
        return maxsum/k;
    }

};