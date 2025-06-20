/*
-------------------------------
Intuition:
We need to find the minimum number of platforms required so that no train has to wait. 
This is equivalent to finding the maximum number of overlapping intervals (arrivals vs departures).

Approach:
1. Sort both arrival and departure times.
2. Use two pointers (a for arrival, d for departure).
3. Traverse both arrays:
   - If a train arrives before or at the time another departs, we need a new platform.
   - If a train departs before the next arrives, we can reuse a platform.
4. Keep track of the maximum platforms needed at any time.

Time Complexity: O(n log n) for sorting
Space Complexity: O(1)

Example:
arr[] = 900 940 950 1100 1500 1800
dep[] = 910 1200 1120 1130 1900 2000
→ Max platforms needed = 3
-------------------------------
*/


class Solution {
  public:
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    int maxMeetings(vector<int>& start, vector<int>& end) {
        // Your code here
        vector<pair<int,int>> mp;
        int n=start.size();
        
        for(int i=0;i<n;i++){
            mp.push_back({end[i],start[i]});
            
        }
        sort(mp.begin(),mp.end());
        int lastindex=mp[0].first;
        int count=1;
        for(int i=1;i<n;i++){
            if(lastindex<mp[i].second){count++;
                lastindex=mp[i].first;
            }
            
        }
        return count;
    }
};