class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int s = INT_MIN;
        int c = 0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            c+=nums[i];
            s=max(s,c);
            if(c<0){
                c=0;
            }
        }
        return s;
    }
};
