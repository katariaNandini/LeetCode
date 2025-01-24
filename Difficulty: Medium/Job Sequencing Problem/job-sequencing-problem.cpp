//{ Driver Code Starts
// Program to find the maximum profit job sequence from a given array
// of jobs with deadlines and profits
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

struct jobid{
  int deadline;
  int profit;
  int id;
};
class Solution {
  public:
  bool static comp(struct jobid j1,jobid j2){
    //   if(j1.deadline<j2.deadline) return true;
    //   else if(j1.deadline>j2.deadline) return false;
       if(j1.profit>j2.profit) return true;
      return false;
        
  }
    vector<int> JobSequencing(vector<int> &id, vector<int> &deadline,
                              vector<int> &profit) {
        int n=profit.size();
        struct jobid job[n];
        for(int i=0;i<n;i++){
            job[i].deadline=deadline[i],job[i].profit=profit[i],
            job[i].id=id[i];
        }
        sort(job,job+n,comp);
        int maxi=job[0].deadline;
        
        
        for(int i=1;i<n;i++){
            maxi=max(maxi,job[i].deadline);
        }
        
        int slot[maxi+1];
        for(int i=0;i<=maxi;i++){
            slot[i]=-1;
        }
        int count_id=0;
        int count_profit=0;
        for( int i=0;i<n;i++){
            for(int j=job[i].deadline;j>0;j--){
                if(slot[j]==-1){
                    slot[j]=i;
                    count_id++;
            count_profit+=job[i].profit;
            break;
                }
            }
            // if(job[i].deadline==job[i+1].deadline&&i<n-1)
            // continue;
            // else
            // count_id++;
            // count_profit+=job[i].profit;
        }
        vector<int> ans;
        ans.push_back(count_id);
        ans.push_back(count_profit);
        return ans;
        // code here
    }
};


//{ Driver Code Starts.
//            Driver program to test methods
int main() {
    int t;
    // testcases
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> jobIDs, deadlines, profits;
        string temp;
        getline(cin, temp);
        istringstream ss1(temp);
        int x;
        while (ss1 >> x)
            jobIDs.push_back(x);

        getline(cin, temp);
        istringstream ss2(temp);
        while (ss2 >> x)
            deadlines.push_back(x);

        getline(cin, temp);
        istringstream ss3(temp);
        while (ss3 >> x)
            profits.push_back(x);

        int n = jobIDs.size();

        Solution obj;
        vector<int> ans = obj.JobSequencing(jobIDs, deadlines, profits);
        cout << ans[0] << " " << ans[1] << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends