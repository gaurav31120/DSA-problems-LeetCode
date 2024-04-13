class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int count0 = 0, count1 = 0, count2 = 0;
        int i = 0;
        for (i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
            {
                count0++;
            }
            if (nums[i] == 1)
            {
                count1++;
            }
            if (nums[i] == 2)
            {
                count2++;
            }
        }
        // nums.clear();

        for (i = 0; i < count0; i++)
        {
            nums[i] = 0;
        }
        for (; i < count0 + count1; i++)
        {
            nums[i] = 1;
        }
        for (; i < nums.size(); i++)
        {
            nums[i] = 2;
        }
    }
};