class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        if(m*n!=original.size()){
            return {};
        }
        int count=0;
        vector<vector<int>> vc(m,vector<int>(n, 0));;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                vc[i][j]=original[count];
                count++;
            }
        }
        return vc;

    }
};