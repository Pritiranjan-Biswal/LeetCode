class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        int left=0;
        int right=col-1;
        int top=0;
        int bottom=row-1;
        vector<int>ans;
        while(left<=right && top<=bottom) {
            for(int j=left; j<=right; j++) {
                ans.push_back(matrix[top][j]);
            }
            top++;

            for(int j=top; j<=bottom; j++) {
                ans.push_back(matrix[j][right]);
            }
            right--;

            if(top<=bottom) {
                for(int j=right; j>=left; j--) {
                    ans.push_back(matrix[bottom][j]);
                }
                bottom--;   
            }
            if(left<=right) {
                for(int i=bottom; i>=top; i--) {
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return ans;
    }
};