class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
      int n=meetings.size();
      sort(meetings.begin(),meetings.end());
      int res=0,end=0;
      for( auto meet:meetings){
            if(meet[0]>end){
                res+=meet[0]-end-1;

            }
            end=max(end,meet[1]);
      }  
      if(days>end){
        res+=days-end;
      }
    return res;
    }
};