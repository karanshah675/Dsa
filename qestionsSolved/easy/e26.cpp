// https://leetcode.com/problems/squares-of-a-sorted-array/?envType=problem-list-v2&envId=array
class Solution {
public:
    void merge(vector<int>& arr, int st, int mid, int end) {
        int i = st;
        int j = mid + 1;
        vector<int> temp;
        while (i <= mid && j <= end) {
            if (arr[i] <= arr[j]) {
                temp.push_back(arr[i]);
                i++;
            } else {
                temp.push_back(arr[j]);
                j++;
            }
        }
        while (i <= mid) {
            temp.push_back(arr[i]);
            i++;
        }
        while (j <= end) {
            temp.push_back(arr[j]);
            j++;
        }
        for (int i = 0; i < temp.size(); i++) {
            arr[i + st] = temp[i];
        }
    }
    void mergeSort(vector<int>& arr, int st, int end) {
        if (st < end) {
            int mid = st + (end - st) / 2;
            mergeSort(arr, st, mid);
            mergeSort(arr, mid + 1, end);
            merge(arr, st, mid, end);
        }
    }

    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> vc(nums);
        for (int i = 0; i < nums.size(); i++) {
            vc[i] = nums[i] * nums[i];
        }
        int st=0;
        int end=vc.size()-1;
        mergeSort(vc,st,end);
        return vc;
    }
};
// time : O(n logn)
//space : O(n)