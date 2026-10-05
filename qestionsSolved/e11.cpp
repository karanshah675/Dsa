// https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/submissions/2163486707/?envType=problem-list-v2&envId=array
class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                    if(grid[i][j]<0){
                        count++;
                    }
            }
        }   
        return count;
    }
};
// time : O(n^2)
// space : O(1)