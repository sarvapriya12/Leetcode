class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) 
    {
        int ans = 0;
        int product = 1;
        int release = 0;
        
        
        for(int current = 0; current < nums.size(); current++)
        {
            product *= nums[current];
            
           
            while(release <= current && product >= k)
            {
                product = product/nums[release];
                release++;
            }
            
            ans += (current-release+1);
        }
        return ans;
    }
};
