class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        int n=words.size();
        vector<string> ans;
        for(int i=0;i<n;i++){
            
            for(int j=0;j<n;j++){
                if(i==j) continue;
                 size_t pos = words[i].find(words[j]);

                    if (pos != string::npos) {


                            ans.push_back(words[j]);  
                              }
            }
        }
          set<string> uniqueWords(ans.begin(), ans.end());

    // Convert back to vector if needed
    vector<string> word(uniqueWords.begin(), uniqueWords.end());
        return word;
    }
};