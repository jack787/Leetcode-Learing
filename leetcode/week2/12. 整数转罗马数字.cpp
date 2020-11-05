class Solution {
    //I,V,X,L,C,D,M
    //1,5,10,50,100,500,1000
    //I可以放在V(5)和X(10)的左边,来表示4和9
    //X可以放在L(50)和C(100)的左边,来表示40,90
    //C可以放在D,M左边,表示400,900
public:
    string intToRoman(int num) {
        int value[]={
            1000,900,500,400,100,90,50,40,10,9,5,4,1
        };
        string reps[]={
            "M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"
        };
        string res;
        for(int i=0;i<13;i++){
            while(num>=value[i]){
                num-=value[i];
                res+=reps[i];
            }
        }
        return res;
    }
};