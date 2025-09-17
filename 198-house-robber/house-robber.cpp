class Solution {
public:
    // test
    int rob(vector<int>& nums) {
        int n=nums.size();
        // vector<int> dp(n,-1);
        // return f(n-1,nums,dp);
        int cur=0,prev=0;
        for(int i=0;i<n;i++){
            int temp=cur;
            cur=max(cur,prev+nums[i]);
            prev=temp;        
            }
             return cur;
    }
   
    // int f(int ind,vector<int> nums,vector<int>&dp){
    //     if (ind==0) return nums[ind];
    //     if (ind<0) return 0;
    //     if(dp[ind]!=-1) return dp[ind];
    //     int pick = nums[ind]+f(ind-2,nums,dp);
    //     int nonpick =0+f(ind-1,nums,dp);

    //     return dp[ind]= max(pick,nonpick);
        
    // }
};