class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        int ax1 = rec1[0], ay1 = rec1[1], ax2 = rec1[2], ay2 = rec1[3], bx1 = rec2[0], by1 = rec2[1], bx2 = rec2[2], by2 = rec2[3];
        if (bx2 < ax2)
        {
            swap(ax2, bx2);
            swap(ax1, bx1);
        }
        if (bx1 >= ax2)
        {
            return false;
        }        
        if (ay2 < by2)
        {
            swap(ay2, by2);
            swap(ay1, by1);
        }
        if (ay1 >= by2)
            return false;
        return true;
    }
};