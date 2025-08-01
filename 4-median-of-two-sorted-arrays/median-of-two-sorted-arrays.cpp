class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i=0;
        int j=0;
        int n=nums1.size();
        int m=nums2.size();
        bool secEle=false;
        if((n+m)%2==0){
            secEle=true;
        }
        int count=0;
        int ele=INT_MIN;
        int elee=INT_MIN;
        while(i<n||j<m){
            elee=ele;
            if(i<n&&(j>=m||nums1[i]<nums2[j])){
                ele=nums1[i];
                i++;
            }
            else 
             {   ele=nums2[j];
                j++;}
            
            count++;
            
            if(count==((n+m)/2)+1){
                if((n+m)%2==0)return (double)(elee+ele)/2.0;
                else return ele;
            }
            
        }
        
        return ele;
        }
};