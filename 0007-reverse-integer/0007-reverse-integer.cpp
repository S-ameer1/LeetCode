class Solution {
public:
    int reverse(int x) {
        int num=0;
        while(x!=0){
            int last=x%10;
            if(num>INT_MAX/10 || num<INT_MIN/10){
                return 0;
            }
            else{
            num = num * 10 + last;

            }
            x=x/10;

        }
       
       
        return num;
    }
};