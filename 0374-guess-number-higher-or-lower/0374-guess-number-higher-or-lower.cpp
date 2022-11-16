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
    int fun (int lo, int hi)
    {
        int mid = lo + (hi - lo)/2;
        int res = guess(mid);
        if (res == 0)
            return mid;
        else if (res == -1)
            return fun(lo, mid - 1);
        else
            return fun(mid + 1, hi);
    }
    int guessNumber(int n) {
        return fun(1, n);
    }
};