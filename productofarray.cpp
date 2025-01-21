class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       int n = nums.size();
       vector<int>l(n),r(n),res(n);
       int left=1,right=1;
       l[0]=1,r[n-1]=1;
       for(int i=0;i<n;i++){
        l[i]=left;
        left*=nums[i];
       }

       for(int  i = n-1;i>=0;i--){
        r[i] = right;
        right*=nums[i];
       }



       for(int i=0;i<n;i++){
        res[i] = l[i] * r[i];
       }



       return res;


    }

    
};
