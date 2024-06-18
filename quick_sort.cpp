class Solution {
public:

    int partition(int low,int high,vector<int> &nums)
    {
        int i=low;
        int j=high;
        int pivot=nums[low];
        while(i<j)
        {
            while(nums[i]<=pivot && i<high)
            {
                i++;
            }
            while(nums[j]>pivot && j>low) j--;
            if(i<j)
            swap(nums[i],nums[j]);
        }
        swap(nums[low],nums[j]);
        return j;
    }
    void quicksort(int low,int high,vector<int> &nums)
    {
        if(low<high)
        {
            int partition_index=partition(low,high,nums);
            quicksort(low,partition_index-1,nums);
            quicksort(partition_index+1,high,nums);
        }
    }
    void sortColors(vector<int>& nums) {
        quicksort(0,nums.size()-1,nums);
    }
};
