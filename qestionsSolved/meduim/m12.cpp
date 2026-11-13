class Solution
{
public:
    int singleNonDuplicate(vector<int> &nums)
    {
        int n = nums.size();
        if (nums.size() == 1)
        {
            return nums[0];
        }
        if (nums[0] != nums[1])
        {
            return nums[0];
        }
        if (nums[n - 1] != nums[n - 2])
        {
            return nums[n - 1];
        }
        int st = 0;
        int end = n - 1;
        while (st <= end)
        {
            int mid = st + (end - st) / 2;
            if (nums[mid - 1] != nums[mid] && nums[mid + 1] != nums[mid])
            {
                return nums[mid];
            }
            if (mid % 2 == 0)
            {
                if (nums[mid - 1] == nums[mid])
                {
                    end = mid - 1;
                }
                else
                {
                    st = mid + 1;
                }
            }
            else
            {
                if (nums[mid - 1] == nums[mid])
                {
                    st = mid + 1;
                }
                else
                {
                    end = mid - 1;
                }
            }
        }
        return 0;
    }
};
// time:O(logn)
// space:O(1)