class Solution {
public:
    int possibleStringCount(string word) {
        int n=word.size();
        int j=1;
        int count=0;
        while(j<n){
            if(word[j]==word[j-1])count++;
            j++;
        }
        return count+1;
    }
};