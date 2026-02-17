class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int temp=0;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(nums[i]==0)
                {
                    temp=nums[i];
                    nums[i]=nums[j];
                    nums[j]=temp;
                }
            }
        }
    }
};
