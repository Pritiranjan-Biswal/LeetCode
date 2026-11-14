class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n= nums.size();
        int presum=0;
        int cnt=0;
        
        unordered_map<int, int>mp;
        mp[0]=1;
        for(int i=0; i<n; i++) {
            presum+=nums[i];
            int bal=presum-k;
            cnt+=mp[bal];

            mp[presum]+=1;

        }
        return cnt;
    }
};