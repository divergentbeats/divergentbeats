class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {

        int n = heights.size();

        stack<int> st;

        int maxArea = 0;

        for(int i = 0; i <= n; i++)
        {
            // Treat end as height 0
            int currHeight = (i == n) ? 0 : heights[i];

            while(!st.empty() && currHeight < heights[st.top()])
            {
                int height = heights[st.top()];
                st.pop();

                int rightSmall = i;

                int leftSmall;

                if(st.empty())
                    leftSmall = -1;
                else
                    leftSmall = st.top();

                int width = rightSmall - leftSmall - 1;

                maxArea = max(maxArea, height * width);
            }

            st.push(i);
        }

        return maxArea;
    }
};