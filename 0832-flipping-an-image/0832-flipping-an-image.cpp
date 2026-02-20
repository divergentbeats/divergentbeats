class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int left=0,right=0;
        int temp=0;
        for(int i=0;i<image.size();i++)
        {
            for(int j=0;j<image[i].size();j++)
            {
                if(image[i][j]==0)
                image[i][j]=1;
                else
                image[i][j]=0;

            }
            
                left=0;
                right=image[i].size()-1;
                while(left<=right)
                {
                    temp = image[i][left];
                    image[i][left]=image[i][right];
                    image[i][right]=temp;
                    left++,right--;
                }

            

        }
        return image;
        
    }
};