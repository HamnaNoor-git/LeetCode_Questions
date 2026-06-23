class Solution {
public:
    int reverse(int x) {

        if(x>0){
            int t=x,count=-1;

            while(x!=0){
                x/=10;
                count++;
            }

            long long rev=0,d;

            while(t!=0)
            {
                d=t%10;
                d*=(pow(10,count));
                rev+=d;
                count--;
                t/=10;
            }

            if(rev > INT_MAX)
                return 0;

            return rev;
        }

        else if(x<0){

            if(x == INT_MIN)
                return 0;

            x*=(-1);

            int t=x,count=-1;

            while(x!=0){
                x/=10;
                count++;
            }

            long long rev=0,d;

            while(t!=0)
            {
                d=t%10;
                d*=(pow(10,count));
                rev+=d;
                count--;
                t/=10;
            }

            if(rev > INT_MAX)
                return 0;

            rev*=(-1);

            return rev;
        }

        else
            return 0;
    }
};
