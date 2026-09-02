class Solution {
public:
    int findMin(vector<int> &nums) {
       int l=0,h=nums.size()-1,res=nums[0];
       
       while(l<=h){
        if(nums[l]<nums[h]){
            res= min(res,nums[l]);
            break;
        }
        int mid = (l+h)/2;
        res= min(res,nums[mid]);

        if(nums[mid]>=nums[l]) l=mid+1;
        else
         h = mid-1;
       } 
       return res;
    }
};
