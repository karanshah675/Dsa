class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
       vector<int> vc;
       for(auto i : nums1){
            if(find(nums2.begin(),nums2.end(),i) != nums2.end() && find(vc.begin(),vc.end(),i) == vc.end()){
                vc.push_back(i);
            }
       }
       return vc;
       
    }
};
// - Worst-case time complexity: \(\boxed{O(n(n+m))}\)
// - Worst-case space complexity: \(\boxed{O(\min(n,m))}\)
// Where:
// - \(n\) = nums1.size()
// - \(m\) = nums2.size()