class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n=nums.size();
        int temp=0;
        int a=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]%2==0)
            {
                temp = nums[i];
                nums[i] = nums[a];
                nums[a] = temp;
                a++;
            }
        }
        return nums;
    }
};
