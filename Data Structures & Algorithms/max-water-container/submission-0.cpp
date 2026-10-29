class Solution {
public:
    int maxArea(vector<int>& heights) {
      int maxx = 0;

      int l =0,r=heights.size()-1;

      while(l<r){
        int len = r-l;
        int wid = min(heights[l],heights[r]);
        int area = len*wid;

        maxx = max(maxx,area); 

        if(heights[l]<heights[r])l++;
        else r--;
      }  
      return maxx;
    }
};
