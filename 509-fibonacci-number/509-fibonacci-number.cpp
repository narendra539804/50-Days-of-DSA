class Solution {
public:
    int fib(int N)
    {
     int i,a=0,b=1,c;
     for(i=0;i<N;i++)
     {
         c=a+b;
         a=b;
         b=c;
     }
        return a;
    }
};