class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
         vector<vector<int>> result(r,vector<int>(c));
         int ele = r*c;
         int row=0;
         int col=0;

    if(ele!= (mat.size()*mat[0].size()))
    return mat;
    else if(ele == (mat.size()*mat[0].size()))
    {
      for(int i=0;i<mat.size();i++)
      {
        for(int j=0;j<mat[i].size();j++)
        {
            result[row][col] = mat[i][j];
            if(col<c-1)
            col++;
            else if(col==c-1)
            {
            row++;
            col=0;
            }
        }
        
      }
      
    }

     return result;   
    }
};