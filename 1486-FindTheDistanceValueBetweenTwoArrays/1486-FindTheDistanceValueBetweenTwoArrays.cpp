// Last updated: 8/16/2025, 1:57:05 PM
class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int count=0;
        bool flag=false;
        for(int i=0;i<arr1.size();i++){
            for(int j=0;j<arr2.size();j++){
                if(abs(arr1[i]-arr2[j])<=d){
                    flag=true;
                }
            }
            if(!flag) count++;
            flag=false;
        }
        return count;
    }
};