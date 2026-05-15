class Solution {
public:

    bool canFinish(vector<int>& piles, int h, int speed)
    {
        long long totalHours = 0;

        for(int bananas : piles)
        {
            // Ceiling division
            totalHours += (bananas + speed - 1) / speed;
        }

        return totalHours <= h;
    }

    int minEatingSpeed(vector<int>& piles, int h) {

        int left = 1;

        int right = *max_element(piles.begin(), piles.end());

        int answer = right;

        while(left <= right)
        {
            int mid = left + (right - left) / 2;

            if(canFinish(piles, h, mid))
            {
                answer = mid;

                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }

        return answer;
    }
};