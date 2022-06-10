class Solution {
public:
    void transpose(vector<vector<int>>& mat)
    {
        for(int i=0;i<mat.size();i++)
            for(int j=i+1;j<mat.size();j++)
                swap(mat[i][j],mat[j][i]);
            
    }
    void rotate(vector<vector<int>>& matrix) {
        transpose(matrix);
        
        for(int i=0;i<matrix.size();i++)
        {
            int low=0,high=matrix.size()-1;
            while(low<high)
            {
                swap(matrix[i][low],matrix[i][high]);
                low++,high--;
            }
        }
    }
};