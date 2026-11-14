class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        int sum=0, count=0;
        unordered_map<int,int>mp;
        mp[0]=1;
        for(int i=0; i<n; i++) {
            if(nums[i]%2 !=0) {
                sum++;
            }
            int rem=sum-k;
            count+=mp[rem];
            mp[sum]++;
        }
        return count;
    }
};