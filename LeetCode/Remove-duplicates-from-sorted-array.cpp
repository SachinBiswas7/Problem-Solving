class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        
    int k=0,i;

    for (i=1; i<nums.size(); i++)
    {
        if(nums[k]!=nums[i])
        {
            k++;
        }
        nums[k]=nums[i];
    }
    return k+1;

    }
};
