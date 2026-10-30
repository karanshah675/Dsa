class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp;
        unordered_map<int,int> mp1;
        vector<int> vc;
        for(int i : nums1){
            mp[i]++;
        }
        for(int i : nums2){
            mp1[i]++;
        }
        for(auto i : mp){
            if(mp1.find(i.first)!=mp1.end()){
                int mini = min(mp1[i.first],mp[i.first]);
                int val=i.first;
                for(int i=1;i<=mini;i++){
                    vc.push_back(val);
                }
            }
        }
        return vc;
    }
};