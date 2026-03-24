class Solution {
public:
    vector<int> intersection(vector<int>& a, vector<int>& b) {
        int n=a.size();
        int m=b.size();
        vector<int> c;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(a[i]==b[j]){
                    c.push_back(a[i]);
                    break;
                }
            }
        }
        sort(c.begin(),c.end());
        vector<int> result;
        for(int i=0;i<c.size();i++){
            if(i==0 || c[i-1]!=c[i]){
                result.push_back(c[i]);
            }
        }
        return result;
    }
};
