class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
         ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

         sort(nums.begin(),nums.end());
        int n=nums.size();
        int left=0;
        int right=n-1;
        int v=0;
        while(left<right)
        {
            int sum = nums[left]+nums[right];
            if(sum==k)
            {
                v++;
                left++;
                right--;
            }
            else if(sum < k)
            left++;
            else
            right--;
        }
        return v;
    }
};
