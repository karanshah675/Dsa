class Solution {
public:
bool isFreqMatch(int f[],int f2[]){
    for(int i=0;i<26;i++){
        if(f[i]!=f2[i]){
            return false;
        }
    }
    return true;
}
    bool checkInclusion(string s1, string s2) {
        int freq[26] = {0};
        for (int i = 0; i < s1.size(); i++) {
            freq[s1[i] - 'a']++;
        }
        int windowSize = s1.size();
        for (int i = 0; i < s2.size(); i++) {

            int windowInx = 0;
            int ind = i;
            int windowFreq[26] = {0};
            while (windowInx < windowSize && ind < s2.size()) {
                windowFreq[s2[ind] - 'a']++;
                windowInx++;
                ind++;
            }
            if(isFreqMatch(freq,windowFreq)){
                return true;
            }
        }
        return false;
    }
};