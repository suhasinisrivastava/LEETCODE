/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int pick=n/2;
        while(guess(pick)!=0){
        if(guess(pick)==-1){
            pick-=1;
        }
        else if(guess(pick)==1){
            pick+=1;
        }
        }
        return pick;
    }
};