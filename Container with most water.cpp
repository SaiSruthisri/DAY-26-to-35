class Solution {
public:
    int maxArea(vector<int>& height) {
        ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

        int n = height.size();
        int left=0;
        int right=n-1;
        int area=0;
        int maxi=0;
        while(left<=right)
        {
            area = (right-left) * min(height[right],height[left]);
            maxi = max(area,maxi);
            if(height[left]<=height[right])
            {
              left++;
            }
            else
            {
                right--;
            }
        }
        return maxi;
    }
};
