class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum=0;
        int j=0;
        double maximum;
        
    while(j<k)
    {
        sum+=nums[j];
        j++;
    }
    maximum=sum;
    if(nums.size()==1)
        return sum;
    for(int i=0;i<=nums.size()-k;i++)
    {
        maximum=max(maximum,sum);
        sum+=nums[j]-nums[j-k];
        j++;
    }
    return maximum/k;
        
    }
};