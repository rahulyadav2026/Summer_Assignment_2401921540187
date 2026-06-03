class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        // for(int i=0;i<n;i++){
        //     nums[i]=nums[i]*nums[i];
        // }
        // sort(nums.begin(),nums.end());
        // return nums;
        vector<int>v;
        for(int i=0;i<nums.size();i++){
            v.push_back(nums[i]*nums[i]);

        }
        sort(v.begin(),v.end());
        return v;

        
    }
};
