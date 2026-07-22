class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        // code here
        int l=0, r=arr.size()-1;
        while(l<r){
            if(arr[l] == 1 && arr[r] == 1){
                r--;
            }
            else if(arr[l] == 0 && arr[r] == 0){
                l++;
            }
            else if(arr[l] == 0 && arr[r] == 1){
                l++,r--;
            }
            else{
                swap(arr[l],arr[r]);
                l++,r--;
            }
        }
        
    }
};