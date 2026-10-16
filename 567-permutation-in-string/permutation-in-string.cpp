class Solution {
public:
// void resetmap(string s1,unordered_map<char,int>&mp){
//     mp.clear();
//     for(auto it:s1){
        
//             mp[it]++;
//         }
//         return ;
// }
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int>mp;
        for(auto it:s1){
            mp[it]++;
        }
        int var=s1.size();
        int l=0;
        int r=0;
        int n=s2.size();
        // for(int i=0;i<n;i++ ){
        //       var=s1.size();
        //         resetmap(s1,mp);
        //    r=i;
        //    cout<<"iteration"<<i<<endl;
        while(r<s2.size()){
           if(mp.find(s2[r])!=mp.end()){
            if(mp[s2[r]]>0){
                var--;
               
            }
             mp[s2[r]]--;
            }
            if((r-l+1)>s1.size()){
            if(mp.find(s2[l])!=mp.end()){
            if(mp[s2[l]]>=0){
                var++;
               
            }
             mp[s2[l]]++;
            }
            l++;
            }
          

           if(var==0) {
            
            return true;}
           r++;
        }
        return false;
    }
};