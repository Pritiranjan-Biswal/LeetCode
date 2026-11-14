class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int>answer(n);
        vector<int>leftsum(n,0);
        

        vector<int>rightsum(n,0);
        
        for(int i=1;i<nums.size(); i++) {
            leftsum[i]=(nums[i-1]+leftsum[i-1]);
        }
        for(int i=n-2; i>=0; i--) {
            rightsum[i]=(nums[i+1]+rightsum[i+1]);
        }
        for(int i=0; i<n; i++) {
            answer[i]=abs(leftsum[i]-rightsum[i]);
        }
        return answer;
    }
};