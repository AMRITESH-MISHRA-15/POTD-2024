class Solution {
public:
    int minPartitions(string n) {
        int max=n[0];
        for(int i=0;i<n.size();i++){
            if(n[i]>max)max=n[i];
        }
        return max-48;
    }
};