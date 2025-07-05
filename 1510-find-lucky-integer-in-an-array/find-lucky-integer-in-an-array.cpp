class Solution {
public:
    int findLucky(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int maxi=0;
        int number=arr[0];
        int n=arr.size();
        int count=1;
        int maxnum=-1;
        for(int i=1;i<n;i++){
            if(arr[i]==number)count++;
            else {
                if(count==number){
                    maxnum=max(number,maxnum);
                }
                number=arr[i];
                count=1;
            }
        }
        if(count==number){
                    maxnum=max(number,maxnum);
                }
        return maxnum;
    }
};