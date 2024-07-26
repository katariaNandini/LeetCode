class Solution {
public:
    int maxHeightOfTriangle(int red, int blue) {
        int count=0;
       // if(red%2!=0&&blue%2==0)
        int red1=red;
        int blue1=blue;
        for(int i=1;;){
            if(i%2!=0&&i<=blue){
            blue=blue-i;
            count++;
            i++;
            }
            else if(i%2==0&&i<=red){
                red=red-i;
                count++;
                i++;
            }
            else break;
        }
      int count1=0;
            int temmp=red1;
            red1=blue1;
            blue1=temmp;
                for(int i=1;;){
            if(i%2!=0&&i<=blue1){
            blue1=blue1-i;
            count1++;
            i++;
            }
            else if(i%2==0&&i<=red1){
                red1=red1-i;
                count1++;
                i++;
            }
            else break;
        }
        
        return count>count1?count:count1;
    }
};