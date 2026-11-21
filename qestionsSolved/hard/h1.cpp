//!brute force approach
class Solution {
public:
    int trap(vector<int>& height) {
        int sum=0;

        for(int i=0;i<height.size()-1;i++){
            int Lmax=INT_MIN;
            int Rmax=INT_MIN;
            if(i>0){
                for(int j=i-1;j>=0;j--){
                    Lmax=max(height[j],Lmax);
                }
                for(int j=i+1;j<height.size();j++){
                    Rmax=max(height[j],Rmax);
                }
            }
            if(min(Lmax,Rmax)>height[i]){
            sum+=min(Lmax,Rmax)-height[i];
            }
        }
        return sum;
    }
};
// time:O(n^2)
// space:O(1)
class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> lmax(n,0);
        vector<int> rmax(n,0);
        int sum=0;
        lmax[0]=height[0];
        rmax[n-1]=height[n-1];
        for(int i=1;i<n;i++){
            lmax[i]=max(lmax[i-1],height[i]);
        }
        for(int i=n-2;i>=0;i--){
            rmax[i]=max(rmax[i+1],height[i]);
        }
        for(int i=0;i<n;i++){
            sum+=min(lmax[i],rmax[i])-height[i];
        }
        return sum;
    }
};
// time:O(n)
// spice:O(1)