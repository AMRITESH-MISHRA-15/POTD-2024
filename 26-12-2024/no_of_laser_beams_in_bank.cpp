class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int m=bank.size();
        int n=bank[0].size();
        int sum=0,max=0,a=1;
        for(int i=0;i<m;i++){
            int count=0;
            for(int j=0;j<n;j++){
                if(bank[i][j]=='1')count++;
            }
            if(count>0){
                a*=count;
                max++;
            }
            if(max==2) {
                sum+=a;
                max=1;
                a=count;
            }
        }
        return sum;
    }
};