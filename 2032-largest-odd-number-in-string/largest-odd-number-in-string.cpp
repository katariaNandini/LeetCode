class Solution {
public:
    string largestOddNumber(string num) {
        vector<int> arr;
        int n=num.size();
        int maxi=-1;
        // if((num[n-1]-'0')%2!=0) return num;
        for(int i=n-1;i>=0;i--){
            int x=(num[i]-'0');
           if(x%2!=0){
            return num.substr(0,i+1);
           }
        }
         return "";
        // return  to_string(maxi);
    }
};