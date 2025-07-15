class Solution {
public:
    bool isValid(string word) {
        int n=word.size();
        if(n<3)return false;
        bool hasconst=false;
        bool hasvow=false;
        for(int i=0;i<n;i++){
            if(isalpha(word[i])){
               if (word[i]=='A' || word[i]=='E' || word[i]=='I' || word[i]=='O' || word[i]=='U' || word[i]=='a' || word[i]=='e' || word[i]=='i' || word[i]=='o' || word[i]=='u') {
    hasvow = true;
}
                else hasconst=true;
            }
            else if(isdigit(word[i])){

            }
            else return false;
        }
        if(hasconst&&hasvow)return true;
        return false;
    }
};