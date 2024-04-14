class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        vector<int> ans;
        int m = mat.size();
        
        int count, i, j, maxIndex = -1,max = INT_MIN;
         

        for (i = 0; i < m; i++) {
            count = 0;
            for (j = 0; j < mat[i].size(); j++) {
                if(mat[i][j]==1) 
                count++;
            }
            if(count>max) {
                max=count;
                maxIndex = i;
            }
        }

        ans.push_back(maxIndex);
        ans.push_back(max);

        return ans;
    }
};