class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> vc;
        int max = candies[0];
        for (int i : candies) {
            if (i > max) {
                max = i;
            }
        }
        for (int i : candies) {
            if (i + extraCandies >= max) {
                vc.push_back(true);
            } else {
                vc.push_back(false);
            }
        }
        return vc;
    }

};