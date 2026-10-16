class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> mp;
        for (auto it : t) {
            mp[it]++;
        }
        int l = 0;
        int r = 0;
        int var = t.size();

        int ans = INT_MAX;
        int mini = INT_MAX;
        int ansl=0;
        int ansr=0;
        while (r < s.size()) {
            char c = s[r];
            if (mp.find(c) != mp.end()) {
                if (mp[c] > 0)

                {
                   
                    var--;
                }
                 mp[c]--;
            }
            while (var == 0) {
                mini = r - l + 1;
                if(ans>mini){
                    ansl=l;
                    ansr=r;
                    ans=mini;
                }
                // while (mp.find(s[l]) == mp.end())
                //     l++;
                if (mp.find(s[l]) != mp.end()) {
                    mp[s[l]]++;
                   if (mp[s[l]] > 0) {
                var++;
            }
                }
                l++;
            }
            r++;
        }

        if (ans == INT_MAX) {
            return "";
        }
        int len=ansr-ansl+1;
        return s.substr(ansl, len);
        // map of occcurence and that char
        // variable of count
        // if that exist in map and count is not 0
        // count -- and map
        //    if var =0   then move l   map mai aya toh
    }
};