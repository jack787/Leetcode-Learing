class Solution {
public:
    int myAtoi(string str) {
        int k=0;
        while(k<str.size()&&str[k]==' ')k++;
        if(k==str.size())return 0;
        int minus=1;
        if(str[k]=='-')minus=-1,k++;
        else if(str[k]=='+')k++;
        long long res=0;
        while(k<str.size()&&str[k]>='0'&&str[k]<='9'){
            res=res*10+str[k]-'0';
            k++;
            if(res>INT_MAX)break;
        }
        res*=minus;
        if(res>INT_MAX)res=INT_MAX;
         if(res<INT_MIN)res=INT_MIN;
         return res;
    }
};