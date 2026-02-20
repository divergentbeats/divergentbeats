class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[i].size();j++)
            {
                if(i==j) //First diagonal
                sum+=mat[i][j];
                else if(i+j==mat[i].size()-1) //Second diagonal
                sum+=mat[i][j];
            }
        }
        return sum;
        
    }
};