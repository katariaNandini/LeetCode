class Solution {
public:
    
    string multiply(string nums1, string nums2) {
        int n=nums1.size();
        int m=nums2.size();
        reverse(nums1.begin(),nums1.end());
        reverse(nums2.begin(),nums2.end());
        vector<int> res(n + m, 0);
        for(int i=0;i<nums1.size();i++){
            int start=i;
            int carry=0;
            for(int j=0;j<nums2.size();j++){
                int n1=nums1[i]-'0';
                int n2=nums2[j]-'0';
                int num=res[start]+n1*n2+carry;
                int base=num%10;
                 carry =num/10;
                res[start++]=base;
            }
            if(carry!=0)res[start]=carry;
        }
    string ans="";
    int i=res.size()-1;
    while(i>0&&res[i]==0)i--;
    while(i>=0){
        ans+=(res[i]+'0');
        i--;
    }
    return ans;
    }
};