/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int ans=0;
        int m=n;
        for(int i=0;i<m;i++)
       { if(guess(n)==1)
        {
            n++;
        }
        else if(guess(n)==-1)
        {
            n--;
        }
        else if(guess(n)==0)
      {  ans= n;
      break;}
        }
     return ans;
    }
};