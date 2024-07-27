class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n =nums.size();
        int count=0;
        int maxi=0;
        int ans=0;
        int left=0,right=0;
        while(right<n)
        {
           if(nums[right]==1)
           {
            ans++;
           }
           else
           {
            count++;
            if(count<=k)
            {
               ans++;
            }
            else
            {
                while(count>k)
                {
                if(nums[left]==0)
                {
                   count--;
                }
                ans--;
                left++;
                }
                ans++;
            }

           }

            maxi = max(ans, maxi);
            right++;
        }
     return maxi;
    }

};
