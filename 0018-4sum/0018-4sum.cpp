class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;

        for(int i = 0; i<n;i++){
            if(i > 0 && nums[i] == nums[i - 1]){
                continue;
            }
            
            for(int j = i+1;j<n;j++){
                if (j > i + 1 && nums[j] == nums[j - 1]) {
                    continue;
                }
                int p=j+1,q=n-1;

                while(p<q){

                    long long t = (long long)target - nums[i];
                    long long rem = t - nums[j];

                    long long sum = (long long)nums[p] + nums[q];

                    if(sum < rem)
                        p++;
                    else if(sum > rem)
                        q--;
                    else{
                        ans.push_back({nums[i],nums[j], nums[p],nums[q]});
                        p++;
                        q--;
                        while(p < q && nums[p] == nums[p - 1]){
                            p++;
                        }
                        while(p < q && nums[q] == nums[q + 1]){
                            q--;
                        }
                    }
                }
                

            }
        }
        return ans;
        
    }
};