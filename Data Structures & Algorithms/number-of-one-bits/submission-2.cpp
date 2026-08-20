class Solution {
public:
    int hammingWeight(uint32_t n) {
      int res = 0;
      for(int i=0;i<32;i++){
        while(n!=0){
        if(n%2==1)res++;
            n=n>>1;
      }
      }
      return res;
    }
};
