class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int l = 0, b = 0;
        int area = (ax2 - ax1)*(ay2 - ay1) + (bx2 - bx1)*(by2 - by1);
        if (bx2 < ax2)
        {
            swap(ax2, bx2);
            swap(ax1, bx1);
        }
        if (bx1 >= ax2)
        {
            return area;
        }
        else if (bx1 <= ax1)
        {
            l = ax2 - ax1;
        }
        else
        {
            l = ax2 - bx1;
        }
        
        if (ay2 < by2)
        {
            swap(ay2, by2);
            swap(ay1, by1);
        }
        if (ay1 >= by2)
            return area;
        else if (ay1 <= by1)
            b = by2 - by1;
        else
            b = by2 - ay1;
        return area - l*b;
    }
};