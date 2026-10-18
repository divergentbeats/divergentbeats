class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int peakindex=0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]>arr[peakindex])
            peakindex=i;
        }

        return peakindex;
        
    }
};