class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) 
    {
        int ans = 0;
        int product = 1;
        int release = 0;
        
        
        for(int c = 0; c < nums.size(); c++){
            product *= nums[c];
            
            while(release <= c && product >= k){
                product = product/nums[release];
                release++;
            }
            ans += (c-release+1);
        }
        return ans;
    }
};
