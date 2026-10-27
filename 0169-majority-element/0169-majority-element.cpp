class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int ele;
        int cnt=0;
        for(int i=0; i<nums.size(); i++) {
            if(cnt==0) {
                cnt++;
                ele=nums[i];
            }
            else if(ele==nums[i]) {
                cnt++;
            }
            else {
                cnt--;
            }
        }
        cnt=0;
        for(int i=0; i<nums.size(); i++) {
            if(nums[i]==ele) {
                cnt++;
            }
        }
        if(cnt>n/2) {
            return ele;
        }
        return -1;
    }
};