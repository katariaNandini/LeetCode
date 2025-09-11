class Solution {
public:
bool vowel(char ch){
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='U'||ch=='O')return true;
    else return false;
}
    string sortVowels(string s) {
        int n=s.size();
        vector<char> arr;
        string t=s;
        int p=0;
        for(int i=0;i<n;i++){
            if(vowel(s[i]))arr.push_back(s[i]);
        }
        sort(arr.begin(),arr.end());
         for(int i=0;i<n;i++){
            if(vowel(t[i])){t[i]=arr[p];
            p++;}
        }
        return t;
    }
};