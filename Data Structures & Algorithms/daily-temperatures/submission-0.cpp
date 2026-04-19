class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n =temperatures.size();
        vector<int>res(n);
      for(int i=0;i<n;i++){
       int count=0;
       int j=i+1;
           while(j<n){
             count++;
             if(temperatures[j]>temperatures[i]) break;
                j++;
           }
           count=(j==n)?0:count;
           res[i]=count;
      } 
      return res; 
    }
};