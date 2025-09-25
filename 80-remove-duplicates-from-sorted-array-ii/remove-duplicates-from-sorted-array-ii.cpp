class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        int count=0;
        int j=0;
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(i!=0&&arr[i]==arr[i-1])count++;
            else count =0;
           if(count<=1){arr[j]=arr[i];
           j++;}
        }
        return j;
    }
};